import java.util.*;
public class LL
{
    static class Node
    {
        int data;
        Node next;
        Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
    static class Queue
    {
        static Node head=null;
        static Node tail=null;
        static boolean isEmpty()
        {
            return head==null && tail==null;
        }
        public static void enqueue(int data)
        {
            Node newNode=new Node(data);
            if(head==null)
            {
                head=tail=newNode;
                return;
            }
            tail.next=newNode;
            tail=newNode;
        }
        public static int dequeue()
        {
            if(isEmpty())
            {
                System.out.println("Underflow");
                return -1;
            }
            int front=head.data;
            //? single element
            if(tail==head)
            {
                tail=head=null;
            }
            else
            {
                head=head.next;
            }
            return front;
        }
        public static int peek()
        {
            if(isEmpty())
            {
                System.out.println("underflow");
                return -1;
            }
            return head.data;
        }
    }
    public static void main(String args[])
    {
        Queue q=new Queue();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        while(!q.isEmpty())
        {
            System.out.println(q.peek());
            q.dequeue();
        }
    }
}