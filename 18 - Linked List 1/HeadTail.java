import java.util.*;
public class HeadTail
{
    public static void main(String[] args)
    {
        HeadTail ll=new HeadTail();
        ll.head=new Node(1);
        ll.head.next=new Node(2);
    }
    public static class Node
    {
        int data;
        Node next;
        public Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
    public static Node head;
    public static Node tail;
}