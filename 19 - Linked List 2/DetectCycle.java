import java.util.*;
public class DetectCycle
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
    public boolean isCycle()
    {
        Node slow=head;
        Node fast=head;
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
    public static void main(String args[])
    {
        DetectCycle ll=new DetectCycle();
        ll.head=new Node(1);
        ll.head.next=new Node(2);
        ll.head.next.next=head;
        //? ll.head.next.next=new Node(3);
        //? ll.printLL();
        System.out.println(ll.isCycle());
    }
}