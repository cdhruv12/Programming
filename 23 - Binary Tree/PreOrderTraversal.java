import java.util.*;

public class PreOrderTraversal {
    // Node class to represent each node in tree
    static class Node {
        int data;
        Node left;
        Node right;

        public Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    // BinaryTree class to build the binary tree
    static class BinaryTree {
        static int idx = -1;

        public static Node builderTree(int[] nodes) {
            idx++;
            if (nodes[idx] == -1) {
                return null;
            }
            Node newNode = new Node(nodes[idx]);
            newNode.left = builderTree(nodes);
            newNode.right = builderTree(nodes);
            return newNode;
        }
    }

    // Pre-order traversal method
    public void preOrder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    public static void main(String[] args) {
        int[] nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

        // Reset idx before building the tree
        BinaryTree.idx = -1;

        // Build the tree
        Node root = BinaryTree.builderTree(nodes);

        // Create an instance of PreOrderTraversal class
        PreOrderTraversal tree = new PreOrderTraversal();

        // Print root data
        System.out.println("Root Data: " + root.data);
        System.out.println("-----------------------");

        // Perform pre-order traversal
        tree.preOrder(root);
    }
}
