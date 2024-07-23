import java.util.*;
public class InOrderTraversal
{
    static class Node
    {
        int data;
        Node left;
        Node right;
        public Node(int data)
        {
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static class BinaryTree
    {
        static int idx=-1;
        public static Node buildtree(int node[])
        {
            idx++;
            if(node[idx]==-1)
            {
                return null;
            }
            Node newNode=new Node(node[idx]);
            newNode.left=buildtree(node);
            newNode.right=buildtree(node);
            return newNode;
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
    }
    public static void main(String args[])
    {
        int nodes[]={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
        BinaryTree tree=new BinaryTree();
        Node root=tree.buildtree(nodes);
        tree.inOrder(root);
    }
}