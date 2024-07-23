import java.util.*;
public class LLHeadnTail
{
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
    public static void main(String args[])
    {
        LLHeadnTail ll=new LLHeadnTail();
        ll.head=new Node(1);
        ll.head.next=new Node(2);
    }
}