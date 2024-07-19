import java.util.*;
public class PrintLL
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
    public void printLL()
    {
        Node temp=head;
        if(temp==null)
        {
            System.out.print("LL is empty");
        }
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        PrintLL ll=new PrintLL();
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
    }
}