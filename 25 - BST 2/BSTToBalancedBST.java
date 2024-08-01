import java.util.*;
public class BSTToBalancedBST
{
    static class Node
    {
        int data;
        Node left,right;
        public  Node(int data)
        {
            this.data=data;
            this.left=this.right=null;
        }
    }
    public static void preOrder(Node root)
    {
        if(root==null)
        {
            return;
        }
        System.out.print(root.data+" ");
        preOrder(root.left);
        preOrder(root.right);
    }
    public static void getInOrder(Node root,ArrayList<Integer>inorder)
    {
        if(root==null)
        {
            return;
        } 
        getInOrder(root.left,inorder);
        inorder.add(root.data);
        getInOrder(root.right,inorder);
    }
    public static Node createBST(ArrayList<Integer>inorder,int st,int ed)
    {
        if(st>ed)
        {
            return null;
        }
        int mid=(st+ed)/2;
        Node root=new Node(inorder.get(mid));
        root.left=createBST(inorder,st,mid-1);
        root.right=createBST(inorder,mid+1,ed);
        return root;
    }
    public static Node balanceBST(Node root)
    {
        //? inorder seq
        ArrayList<Integer>inorder=new ArrayList<>();
        getInOrder(root,inorder);
        //? sorted ineoder -> balnced bst
        root=createBST(inorder,0,inorder.size()-1);
        return root;
    }
    public static void main(String args[])
    {
        Node root=new Node(8);
        root.left=new Node(6);
        root.right=new Node(5);
        root.left.left=new Node(3);
        root.left.right=new Node(10);
        root.right.left=new Node(11);
        root.right.right=new Node(12);
        root=balanceBST(root);
        preOrder(root);
    }
}