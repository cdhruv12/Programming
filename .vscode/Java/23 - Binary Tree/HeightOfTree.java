import java.util.*;
public class HeightOfTree
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
     * The function calculates the height of a binary tree starting from the root node.
     * 
     * @param root The `root` parameter in the `height` method represents the root node of a binary
     * tree. The method calculates and returns the height of the binary tree, which is the number of
     * edges on the longest path from the root node to a leaf node.
     * @return The height of the binary tree rooted at the given node `root` is being returned.
     */
    public static int height(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        int lh=height(root.left);
        int rh=height(root.right);
        return Math.max(lh,rh)+1;
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
        System.out.println(height(root));
    }
}