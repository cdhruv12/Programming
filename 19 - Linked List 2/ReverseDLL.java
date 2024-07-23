public class ReverseDLL {
    public static class Node {
        int data;
        Node next;
        Node prev;

        public Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }

    public Node head;
    public Node tail;
    public int size;

    // Add First
    public void addFirst(int data) {
        Node newNode = new Node(data);
        size++;
        if (head == null) {
            head = tail = newNode;
            return;
        }
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
    }

    // Reverse DLL
    public void reverseDLL() {
        Node curr = head;
        Node prev = null;
        Node next;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            curr.prev = next;
            prev = curr;
            curr = next;
        }
        // Swap head and tail
        Node temp = head;
        head = tail;
        tail = temp;
    }

    public void printLL() {
        Node temp = head;
        if (temp == null) {
            System.out.println("Empty");
            return;
        }
        while (temp != null) {
            System.out.print(temp.data + "<-->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        ReverseDLL dll = new ReverseDLL();
        dll.addFirst(1);
        dll.addFirst(2);
        dll.addFirst(3);
        dll.printLL();
        System.out.println("Size: " + dll.size);
        dll.reverseDLL();
        dll.printLL();
    }
}
