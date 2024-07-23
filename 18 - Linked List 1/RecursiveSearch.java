import java.util.*;

public class RecursiveSearch {
    public static class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;
    public static Node tail;

    public static void printLL() {
        Node temp = head;
        if (temp == null) {
            System.out.println("LL is empty");
            return;
        } else {
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
        }
        System.out.println();
    }

    public int helper(Node head, int key) {
        if (head == null) {
            return -1;
        }
        if (head.data == key) {
            return 1;
        }
        int idx = helper(head.next, key);
        if (idx == -1) {
            return -1;
        }
        return idx + 1;
    }

    public int recSearch(int key) {
        return helper(head, key);
    }

    public static void main(String args[]) {
        RecursiveSearch ll = new RecursiveSearch();
        ll.printLL();
        ll.head = new Node(1);
        ll.printLL();
        ll.head.next = new Node(2);
        ll.printLL();
        ll.head.next.next = new Node(3);
        ll.printLL();
        System.out.println(ll.recSearch(3)); // Corrected: Call recSearch on instance of RecursiveSearch
    }
}
