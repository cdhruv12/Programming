import java.util.*;
public class Q3
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
    public void swapNode(int x,int y)
    {
        if(x==y)
        {
            return;
        }
        //? Search x and keep track of prevX & currX
        Node prevX=null;
        Node currX=head;
        while(currX!=null && currX.data!=x)
        {
            prevX=currX;
            currX=currX.next;
        }
        //? search y and keep track of prevY and currY
        Node prevY=null;
        Node currY=head;
        while(currY!=null && currY.data!=y)
        {
            prevY=currY;
            currY=currY.next;
        }
        //? if either x or y is not present in LL
        if(currX==null || currY==null)
        {
            return;
        }
        //? if x is not head of LL
        if(prevX!=null)
        {
            prevX.next=currY;
        }
        //? make y new head
        else
        {
            head=currY;
        }
        //? if y is not head of LL
        if(prevY!=null)
        {
            prevY.next=currX;
        }
        //? make  x new head
        else
        {
            head=currX;
        }
        //? swap next pointers
        Node temp=currX.next;
        currX.next=currY.next;
        currY.next=temp;
    }
    public static void printLL()
    {
        Node temp=head;
        if(temp==null)
        {
            System.out.println("Linked List is Empty");
            return;
        }
        else
        {
            while(temp!=null)
            {
                System.out.print(temp.data+"-->");
                temp=temp.next;
            }
        }
        System.out.println("null");
    }
    public static void main(String args[])
    {
        Q3 ll=new Q3();
        ll.head=new Node(1);
        ll.head.next=new Node(2);
        ll.head.next.next=new Node(3);
        ll.head.next.next.next=new Node(4);
        ll.head.next.next.next.next=new Node(5);
        ll.head.next.next.next.next.next=new Node(6);
        ll.printLL();
        ll.swapNode(2,4);
        ll.printLL();
    }
}