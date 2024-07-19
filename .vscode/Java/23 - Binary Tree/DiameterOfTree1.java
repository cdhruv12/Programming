import java.util.*;
public class DiameterOfTree1
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
        int lH=height(root.left);
        int rH=height(root.right);
        return Math.max(lH,rH)+1;
    }
    public static int sum(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        int rSum=sum(root.left);
        int lSum=sum(root.right);
        return lSum+rSum+root.data;
    }
    /**
     * The `diameter` function calculates the diameter of a binary tree by recursively finding the
     * maximum of the sum of heights of left and right subtrees plus one.
     * 
     * @param root The `root` parameter in the `diameter` method represents the root node of a binary
     * tree. The method calculates the diameter of the binary tree, which is defined as the number of
     * nodes on the longest path between two leaves in the tree.
     * @return The `diameter` of the binary tree rooted at the given `Node` is being returned.
     */
    public static int diameter(Node root)
    {
        if(root==null)
        {
            return 0;
        }
        int leftDiam=diameter(root.left);
        int lHt=height(root.left);
        int rightDiam=diameter(root.right);
        int rHt=height(root.right);
        int selfDiam=lHt+rHt+1;
        return Math.max(selfDiam,Math.max(leftDiam,rightDiam));
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
        System.out.println(diameter(root));
    }
}