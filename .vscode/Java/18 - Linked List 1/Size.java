import java.util.*;
public class Size
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
            System.out.print("LL is empty");
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
    public static void main(String args[])
    {
        Size ll=new Size();
        ll.printLL();
        ll.head=new Node(1);
        //?ll.printLL();
        ll.size++;
        ll.head.next=new Node(2);
        ll.size++;
        ll.printLL();
        System.out.println(ll.size);
    }
}