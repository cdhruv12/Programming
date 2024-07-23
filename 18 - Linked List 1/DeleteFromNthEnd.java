import java.util.*;
public class DeleteFromNthEnd
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
    public void deleteNthfromEnd(int n)
    {
        Node temp=head;
        int sz=0;
        if(temp==null)
        {
            System.out.println("LL is empty");
            return;
        }
        while(temp!=null)
        {
            temp=temp.next;
            sz++;
        }
        if(n==sz)
        {
            head=head.next; //? remove first
            return;
        }
        //? sz-n
        int i=0;
        int iToFind=sz-n-1;
        Node prev=head;
        while(i<iToFind)
        {
            prev=prev.next;
            i++;
        }
        prev.next=prev.next.next;
        return;
    }
    public static void main(String args[])
    {
        DeleteFromNthEnd ll= new DeleteFromNthEnd();
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
        ll.head.next.next=new Node(3);
        ll.printLL();
        ll.deleteNthfromEnd(2);
        ll.printLL();
    }
}