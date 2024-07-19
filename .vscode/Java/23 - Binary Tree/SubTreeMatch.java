import java.util.*;
public class SubTreeMatch
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
     * The function `isIdentical` checks if two binary trees are identical in structure and node
     * values.
     * 
     * @param node The `node` parameter represents a node in a binary tree. It is the node that you
     * want to compare with the `subRoot` node to check if they are identical in terms of structure and
     * values.
     * @param subRoot The `subRoot` parameter in the `isIdentical` method represents the root of a
     * subtree that you want to check for identical structure and values with the main tree rooted at
     * `node`. The method recursively compares each node and its children in the main tree (`node`)
     * with the corresponding nodes in
     * @return The method `isIdentical` returns a boolean value indicating whether the two input binary
     * trees represented by the nodes `node` and `subRoot` are identical in structure and values.
     */
    public static boolean isIdentical(Node node,Node subRoot)
    {
        if(node==null && subRoot==null)
        {
            return true;
        }
        else if(node==null || subRoot==null || node.data!=subRoot.data)
        {
            return false;
        }
        if(!isIdentical(node.left,subRoot.left))
        {
            return false;
        }
        if(!isIdentical(node.right,subRoot.right))
        {
            return false;
        }
        return true;
    }
    /**
     * The function `isSubTree` checks if a given subtree is present in a larger tree.
     * 
     * @param root The `root` parameter represents the root of the main tree where we are searching for
     * a subtree.
     * @param subRoot The `subRoot` parameter in the `isSubTree` method represents the root of the
     * subtree that you want to check if it exists within the main tree rooted at `root`. The method
     * recursively checks if the subtree with root `subRoot` is present in the main tree starting from
     * the `
     * @return The method `isSubTree` returns a boolean value indicating whether the `subRoot` is a
     * subtree of the `root` node.
     */
    public static boolean isSubTree(Node root,Node subRoot)
    {
        if(root==null)
        {
            return false;
        }
        if(root.data==subRoot.data)
        {
            if(isIdentical(root,subRoot))
            {
                return true;
            }
        }
        return isSubTree(root.left,subRoot) || isSubTree(root.right,subRoot);
    }
    public static void main(String args[])
    {
        /*
                 1
               /  \
              2    3
             / \  / \
            4  5 6   7
        */
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.left=new Node(6);
        root.right.right=new Node(7);
        /* 
                2
               / \
              4   5  
        */
        Node subRoot=new Node(2);
        subRoot.left=new Node(4);
        subRoot.right=new Node(5);
        System.out.println(isSubTree(root,subRoot));
    }
}