import java.util.*;
public class CountOfNodes
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
    /**
     * The function counts the number of nodes in a binary tree starting from the root node.
     * 
     * @param root The `root` parameter in the `count` method represents the root node of a binary
     * tree. The method recursively counts the number of nodes in the binary tree starting from the
     * root node. If the root node is null, it returns 0. Otherwise, it counts the nodes in the left
     * subtree
     * @return The `count` method is returning the total number of nodes in the binary tree rooted at
     * the `root` node, including the root node itself.
     */
    public static int count(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        int lCount=count(root.left);
        int rCount=count(root.right);
        return lCount+rCount+1;
    }
    public static void main(String args[])
    {
        /*  
                1
               / \
              2   3
             / \   \
            4   5   6
        */
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.right=new Node(6);
        System.out.println(count(root));
    }
}