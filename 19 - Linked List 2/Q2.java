import java.util.*;
public class Q2
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
    //? delete N nodes after M nodes
    public void  deleteNAfterM(int M,int N)
    {
        Node curr=head;
        while(curr!=null)
        {
            for(int i=1;i<M && curr!=null;i++)
            {
                curr=curr.next;
            }
            if(curr==null)
            {
                return;
            }
            //? delete N nodes
            Node temp=curr.next;
            for(int i=1;i<=N  && temp!=null;i++)
            {
                temp=temp.next;
            }
            //? link retained part to rest of list
            curr.next=temp;
            curr=temp;
        }
    }
    //? print LL
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
                System.out.print(temp.data+"-->");
                temp=temp.next;
            }
        }
        System.out.println("null");
    } 
    public static void main(String args[])
    {
        Q2 ll=new Q2();
        ll.head=new Node(1);
        ll.head.next=new Node(2);
        ll.head.next.next=new Node(3);
        ll.head.next.next.next=new Node(4);
        ll.head.next.next.next.next=new Node(5);
        ll.head.next.next.next.next.next=new Node(6);
        ll.printLL();
        ll.deleteNAfterM(2,2);
        ll.printLL();
    }
}