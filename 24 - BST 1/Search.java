import java.util.*;
public class Search
{
    static class Node
    {
        int data;
        Node left, right;
        public Node(int data)
        {
            this.data=data;
            this.left=this.right=null;
        }
    }
    Exception in thread "main" java.lang.NullPointerException: Cannot read field "data" because "<parameter1>" is null  
        at Delete.delete(Delete.java:16)
        at Delete.main(Delete.java:71)
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
    public static boolean search(Node root,int key)
    {
        if(root==null)
        {
            return false;
        }
        if(root.data==key)
        {
            return true;
        }
        if(root.data>key)
        {
            return search(root.left,key);
        }
        else
        {
            return search(root.right,key);
        }
    }
    public static void main(String args[])
    {
        int val[]={5,1,3,4,2,7};
        Node root=null;
        for(int i=0;i<val.length;i++)
        {
            root=insert(root,val[i]);
        }
        inOrder(root);
        System.out.println();
        int key=3;
        if(search(root,key))
        {
            System.out.println("found");
        }
        else
        {
            System.out.println("not found");
        }
    }
}