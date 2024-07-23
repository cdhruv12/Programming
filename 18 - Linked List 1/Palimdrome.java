import java.util.*;
public class Palimdrome
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
            System.out.println("Empty");
            return;
        }
        else
        {
            while(temp!=null)
            {
                System.out.print(temp.data);
                temp=temp.next;
            }
        }
        System.out.println();
    }
    public Node toFindMid(Node head) //? helper fun : slow fast approach
    {
        Node slow=head;
        Node fast=head;
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    public boolean palindrome()
    {
        if(head==null || head.next==null)
        {
            return true;
        }
        //? find mid
        Node midNode=toFindMid(head);
        //? reverse the second half
        Node prev=null;
        Node curr=midNode;
        Node next;
        while(curr!=null)
        {
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        //? check left and right halfs
        Node right=prev; //? right side head
        Node left=head; //? left side head
        while(right!=null)
        {
            if(left.data!=right.data)
            {
                return false;
            }
            left=left.next;
            right=right.next;
        }
        return true;
    }
    public static void main(String args[])
    {
        Palimdrome ll=new Palimdrome();
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
        ll.head.next.next=new Node(3);
        ll.printLL();
        System.out.println(ll.palindrome());
    }
}