import java.util.*;
public class SumOfNodes
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
     * The function calculates the sum of all nodes in a binary tree.
     * 
     * @param root The `root` parameter in the `sum` method represents the root node of a binary tree.
     * The method calculates the sum of all the nodes in the binary tree starting from the given root
     * node.
     * @return The `sum` method is recursively calculating the sum of all nodes in a binary tree
     * starting from the `root` node. It returns the sum of all node values in the tree rooted at the
     * given `root` node.
     */
    public static int sum(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        int lSum=sum(root.left);
        int rSum=sum(root.right);
        return lSum+rSum+root.data;
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
        System.out.println(sum(root));
    }
}