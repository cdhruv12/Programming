import java.util.*;

public class ZigZagLL {
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

    // Method to add a node at the end of the linked list
    public void addLast(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
    }

    // Zig-zag rearrange method
    public void zigZag() {
        if (head == null || head.next == null) {
            return;
        }

        // Find the middle of the linked list
        Node slow = head;
        Node fast = head.next;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        Node mid = slow;

        // Reverse the second half of the linked list
        Node curr = mid.next;
        mid.next = null;
        Node prev = null;
        Node next;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        // Alternate merge
        Node leftH = head;
        Node rightH = prev;
        Node nextL, nextR;
        while (leftH != null && rightH != null) {
            nextL = leftH.next;
            leftH.next = rightH;
            nextR = rightH.next;
            rightH.next = nextL;
            // Update pointers
            leftH = nextL;
            rightH = nextR;
        }
    }

    // Method to print the linked list
    public static void printLL() {
        Node temp = head;
        if (temp == null) {
            System.out.println("LL is empty");
            return;
        } else {
            while (temp != null) {
                System.out.print(temp.data + " --> ");
                temp = temp.next;
            }
        }
        System.out.println("null");
    }

    public static void main(String args[]) {
        ZigZagLL ll = new ZigZagLL();
        ll.addLast(1);
        ll.addLast(2);
        ll.addLast(3);
        ll.addLast(4);
        ll.addLast(5);
        System.out.println("Original Linked List:");
        ll.printLL();
        ll.zigZag();
        System.out.println("ZigZag Linked List:");
        ll.printLL();
    }
}
