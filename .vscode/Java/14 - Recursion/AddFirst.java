import java.util.*;
public class AddFirst
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
            System.out.print("LL is empty");
        }
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
    public void addFirst(int data)
    {
        //? step - 1
        Node newNode=new Node(data);
        if(head==null)
        {
            head=tail=newNode;
        }
        //? step - 2
        newNode.next=head;
        //? step - 3
        head=newNode;
    }
    public  static void main(String args[])
    {
        AddFirst ll=new AddFirst();
        ll.printLL();
        ll.head=new Node(1);
        ll.printLL();
        ll.head.next=new Node(2);
        ll.printLL();
        ll.addFirst(3);
        ll.printLL();
        ll.addFirst(4);
        ll.printLL();
    }
}