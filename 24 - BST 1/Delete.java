import java.util.*;
public class Delete
{
    static class Node
    {
        int data;
        Node left,right;
        public Node(int data)
        {
            this.data=data;
            this.left=this.right=null;
        }
    }
    public static Node delete(Node root,int val)
    {
        if(root.data<val)
        {
            root.right=delete(root.right,val);
        }
        else if(root.data>val)
        {
            root.left=delete(root.left,val);
        }
        else
        {
            //? case 1 (No child)
            if(root.left==null && root.right==null)
            {
                return null;
            }
            //? case 2 (1 child)
            if(root.left==null)
            {
                return root.right;
            }
            if(root.right==null)
            {
                return root.left;
            }
            //? case 3 (2 children)
            Node inS=findInorderSuccesor(root.right);
            root.data=inS.data;
            root.right=delete(root.right,inS.data);
        }
        return root;
    }
    public static Node findInorderSuccesor(Node root)
    {
        while(root.left!=null)
        {
            root=root.left;
        }
        return root;
    }
    public static Node insert(Node root,int val)
    {
        if(root==null)
        {
            root=new Node(val);
            return root;
        }
        if(root.data>val)
        {
            root.left=insert(root.left,val);
        }
        else
        {
            root.right=insert(root.right,val);
        }
        return root;
    }
    public static void inOrder(Node root)
    {
        if(root==null)
        {
            return;
        }
        inOrder(root.left);
        System.out.print(root.data+" ");
        inOrder(root.right);
    }
    public static void main(String args[])
    {
        int val[]={8,5,3,1,4,6,10,11,14};
        Node root=null;
        for(int i=0;i<val.length;i++)
        {
            root=insert(root,val[i]);
        }
        inOrder(root);
        System.out.println();
        root=delete(root,1);
        System.out.println();
        range(root,5,12);
    }
}