import java.util.*;
public class DLL
{
    public static class Node
    {
        int data;
        Node next;
        Node prev;
        public Node(int data)
        {
            this.data=data;
            this.next=null;
            this.prev=null;
        }
    }
    public static Node head;
    public static Node tail;
    public static int size;
    //? Add First
    public void addFirst(int data)
    {
        Node newNode=new Node(data);
        size++;
        if(head==null)
        {
            head=tail=newNode;
            return;
        }
        newNode.next=head;
        head.prev=newNode;
        head=newNode;
    }
    public void addLast(int data)
    {
        Node newNode=new Node(data);
        size++;
        if(head==null)
        {
            head=tail=newNode;
            return;
        }
        tail.next=newNode;
        newNode.prev=tail;
        tail=newNode;
    }
    public int removeFirst()
    {
        if(head==null)
        {
            System.out.println("Empty");
            return Integer.MIN_VALUE;
        }
        if(size==1)
        {
            int val=head.data;
            head=tail=null;
            size--;
            return val;
        }
        int val=head.data;
        head=head.next;
        head.prev=null;
        size--;
        return val;
    }
    public int removeLast()
    {
        if(head==null)
        {
            System.out.println("Empty");
            return Integer.MIN_VALUE;
        }
        if(size==1)
        {
            int val=tail.data;
            head=tail=null;
            size--;
            return val;
        }
        int val=tail.data;
        tail=tail.prev;
        tail.next=null;
        size--;
        return val;
    }
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
                System.out.print(temp.data+"<-->");
                temp=temp.next;
            }
        }
        System.out.println("null");
    }
    public static void main(String args[])
    {
        DLL dll=new DLL();
        dll.addFirst(1);
        dll.addFirst(2);
        dll.addFirst(3);
        dll.printLL();
        System.out.println(dll.size);
        dll.addLast(4);
        dll.addLast(5);
        dll.addLast(6);
        dll.printLL();
        System.out.println(dll.size);
        dll.removeFirst();
        dll.removeFirst();
        dll.printLL();
        System.out.println(dll.size); 
        dll.removeLast();
        dll.removeLast();
        dll.printLL();
        System.out.println(dll.size);
    }
}