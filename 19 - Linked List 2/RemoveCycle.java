import java.util.*;

public class RemoveCycle {

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
            System.out.println("Linked List is Empty");
            return;
        } else {
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
        }
        System.out.println();
    }

    public static boolean isCycle() {
        Node slow = head;
        Node fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }

    public static void removeCycle() {
        //? Detect cycle
        Node slow = head;
        Node fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                break;
            }
        }

        //? If no cycle was found
        if (fast == null || fast.next == null) {
            return;
        }

        //? Find the start of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow.next;
            fast = fast.next;
        }

        // Remove the cycle
        Node prev = fast;
        while (prev.next != fast) {
            prev = prev.next;
        }
        prev.next = null;
    }

    public static void main(String[] args) {
        RemoveCycle ll = new RemoveCycle();
        ll.printLL();

        ll.head = new Node(1);
        Node temp = new Node(2);
        ll.head.next = temp;
        ll.head.next.next = new Node(3);
        ll.head.next.next.next = temp;

        System.out.println(isCycle());  
        removeCycle(); 
        System.out.println(isCycle());  
        ll.printLL();  
    }
}
