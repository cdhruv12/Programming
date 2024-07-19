import java.util.*;
public class AddinMiddle
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
    public void addMiddle(int data,int index)
    {
        if(index<0)
        {
            System.out.println("Invalid index");
            return;
        }
        Node newNode=new Node(data);
        if(index==0)
        {
            newNode.next=head;
            head=newNode;
            return;
        }
        Node temp=head;
        int i=0;
        while(temp!=null && i<index-1)
        {
            temp=temp.next;
            i++;
        }
        if(temp==null)
        {
            System.out.println("Index out of bound");
            return;
        }
        newNode.next=temp.next;
        temp.next=newNode;
    }
    public static void main(String args[])
    {
        AddinMiddle ll=new AddinMiddle();
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
        ll.addMiddle(3,1);
        ll.printLL();
    }
}