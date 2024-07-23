import java.util.*;
public class DiameterOfTree2
{
    static class Node
    {
        int data;
        Node left,right;
        public Node(int data)
        {
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    public static int height(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        //? The lines `int lH=height(root.left);` and `int rH=height(root.right);` are calculating the
        //? height of the left and right subtrees of the current node `root`, respectively.
        int lH=height(root.left);
        int rH=height(root.right);
        //? The line `Math.max(lH, rH) + 1;` in the `height` method is calculating the height of
        //? the current node in the binary tree.
        return Math.max(lH,rH)+1;
    }
    public static int sum(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        //? The code snippet `int lSum=sum(root.left); int rSum=sum(root.right); return
        //? lSum+rSum+root.data;` is calculating the sum of all nodes in the subtree rooted at the
        //? current node `root`.
        int lSum=sum(root.left);
        int rSum=sum(root.right);
        return lSum+rSum+root.data;
    }
    static class Info
    {
        int diam;
        int ht;
        public Info(int diam,int ht)
        {
            this.diam=diam;
            this.ht=ht;
        }
    }
    public static Info diameter(Node root) //? O(n)
    {
        //? The code snippet `if(root==null) { return new Info(0,0); }` in the `diameter` method is
        //? handling the base case for the recursive calculation of the diameter of the binary tree.
        if(root==null)
        {
            return new Info(0,0);
        }
        //? This code snippet is part of the `diameter` method in the `DiameterOfTree2` class. Here's a
        //? breakdown of what it's doing:
        Info leftInfo=diameter(root.left);
        Info rightInfo=diameter(root.right);
        int diam=Math.max(Math.max(leftInfo.diam,rightInfo.diam),leftInfo.ht+rightInfo.ht+1);
        int ht=Math.max(leftInfo.ht,rightInfo.ht)+1;
        return new Info(diam,ht);
    }
    public static void main(String args[])
    {
        /* 
                    1
                   / \
                  2   3
                 / \  /\
                4  5 6   7
        */
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.left=new Node(6);
        root.right.right=new Node(7);
        System.out.println(diameter(root).diam);
    }
}