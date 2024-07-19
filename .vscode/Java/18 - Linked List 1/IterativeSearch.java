import java.util.*;
public class IterativeSearch
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
    public static int itrSearch(int key) //? O(n)
    {
        Node temp=head;
        int i=1;
        while(temp!=null)
        {
            if(temp.data==key)
            {
                return i;
            }
            temp=temp.next;
            i++;
        }
        return -1;
    }
    public static void main(String args[])
    {
        IterativeSearch ll=new IterativeSearch(); 
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
        ll.head.next.next=new Node(3);
        ll.printLL();
        System.out.println(itrSearch(2));
        System.out.println(itrSearch(10));
    }
}