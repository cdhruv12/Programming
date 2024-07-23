import java.util.*;
public class PostOrderTraversal
{
    static class Node
    {
        int data;
        Node left;
        Node right;
        public Node(int data)
        {
            this.data=data;
            this.left=left;
            this.right=right;
        }
    }
    static class BinaryTree
    {
        static int idx=-1;
        public static Node buildTree(int node[])
        {
            idx++;
            if(node[idx]==-1)
            {
                return null;
            }
            Node newNode=new Node(node[idx]);
            newNode.left=buildTree(node);
            newNode.right=buildTree(node);
            return newNode;
        }
        public static void postOrder(Node root)
        {
            if(root==null)
            {
                return;
            }
            postOrder(root.left);
            postOrder(root.right);
            System.out.print(root.data+" ");
        }
    }
    public static void main(String args[])
    {
        int node[]={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
        BinaryTree tree=new BinaryTree();
        Node root=tree.buildTree(node);
        tree.postOrder(root);
    }
}