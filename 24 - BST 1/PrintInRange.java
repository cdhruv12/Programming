import java.util.*;
public class PrintInRange
{
    static class Node
    {
        int data;
        Node left, right;
        Node(int data)
        {
            this.data = data;
            this.left = this.right = null;
        }
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
    public static void range(Node root,int k1,int k2)
    {
        if(root==null)
        {
            return;
        }
        if(k1<=root.data && k2>=root.data)
        {
            range(root.left,k1,k2);
            System.out.print(root.data+" ");
            range(root.right,k1,k2);
        }
        else if(root.data<k1)
        {
            range(root.left,k1,k2);
        }
        else
        {
            range(root.right,k1,k2);
        }
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
        range(root,5,12);
    }
}