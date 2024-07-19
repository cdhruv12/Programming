public class Q4 {
    public static class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;

    public void rearrangeEvenOdd() {
        if (head == null || head.next == null) {
            return;
        }

        Node evenStart = null, evenEnd = null;
        Node oddStart = null, oddEnd = null;
        Node curr = head;

        // Traverse and build the even and odd lists
        while (curr != null) {
            if (curr.data % 2 == 0) { // Node is even
                if (evenStart == null) {
                    evenStart = curr;
                    evenEnd = evenStart;
                } else {
                    evenEnd.next = curr;
                    evenEnd = evenEnd.next;
                }
            } else { // Node is odd
                if (oddStart == null) {
                    oddStart = curr;
                    oddEnd = oddStart;
                } else {
                    oddEnd.next = curr;
                    oddEnd = oddEnd.next;
                }
            }
            curr = curr.next;
        }

        // If there are no even nodes or no odd nodes
        if (evenStart == null || oddStart == null) {
            return;
        }

        // Combine even and odd lists
        evenEnd.next = oddStart;
        oddEnd.next = null;
        head = evenStart;
    }

    public static void printLL() {
        Node temp = head;
        if (temp == null) {
            System.out.println("Linked List is empty");
            return;
        } else {
            while (temp != null) {
                System.out.print(temp.data + "-->");
                temp = temp.next;
            }
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        Q4 ll = new Q4();
        ll.head = new Node(1);
        ll.head.next = new Node(2);
        ll.head.next.next = new Node(3);
        ll.head.next.next.next = new Node(4);
        ll.head.next.next.next.next = new Node(5);
        ll.head.next.next.next.next.next = new Node(6);

        System.out.println("Original list:");
        ll.printLL();

        ll.rearrangeEvenOdd();

        System.out.println("Modified list:");
        ll.printLL();
    }
}
