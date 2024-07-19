import java.util.*;
public class RemoveFirst
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
    public static void printLL()
    {
        Node temp=head;
        if(temp==null)
        {
            System.out.println("LL is empty");
            return;
        }
        else
        {
            while(temp!=null)
            {
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
        }
        System.out.println();
    }
    public static int removeFirst()
    {
        if(head==null)
        {
            return Integer.MIN_VALUE;
        }
        else if(head.next==null)
        {
            int val=head.data;
            head=tail=null;
            return val;
        }
        int val=head.data;
        head=head.next;
        return val;
    }
    public static void main(String args[])
    {
        RemoveFirst ll=new RemoveFirst();
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
        ll.removeFirst();
        ll.printLL();;
    }
}