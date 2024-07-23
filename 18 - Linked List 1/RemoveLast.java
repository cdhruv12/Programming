import java.util.*;
public class RemoveLast
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
    public static int size;
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
    public static int removeLast()
    {
        if(size==0)
        {
            System.out.println("LL is empty");
            return Integer.MIN_VALUE;
        }
        else if(size==1)
        {
            int val=head.data;
            head=tail=null;
            size=0;
            return val;
        }
        //? prev : i=size-2
        Node prev=head;
        for(int i=0;i<size-2;i++)
        {
            prev=prev.next;
        }
        int val=prev.next.data;
        prev.next=null;
        tail=prev;
        size--;
        return val;
    }
    public static void main(String args[])
    {
        RemoveLast ll=new RemoveLast();
        ll.printLL();
        System.out.println(ll.size);
        ll.head=new Node(1);
        ll.size++;
        ll.printLL();
        System.out.println(ll.size);
        ll.head.next=new Node(2);
        ll.size++;
        ll.printLL();
        System.out.println(ll.size);
        ll.removeLast();
        ll.printLL();
        System.out.println(ll.size);
    }
}