import java.util.*;
public class Q1
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
    public Node getIntersectionNode(Node head1,Node head2)
    {
        while(head2!=null)
        {
            Node temp=head1;
            while(temp!=null)
            {
                if(temp==head2)
                {
                    return head2;
                }
                temp=temp.next;
            }
            head2=head2.next;
        }
        return null;
    }
    public static void main(String args[])
    {
        Q1 ll=new Q1();
        Node head1,head2;
        //? Create 2 LL
        head1=new Node(10);
        head2=new Node(3);
        //? Add nodes to 2nd LL
        Node newNode=new Node(6);
        head2.next=newNode;
        newNode=new Node(9);
        head2.next.next=newNode;
        //? Add intersection node
        newNode=new Node(15);
        head1.next=newNode;
        head2.next.next.next=newNode;
        //? add more nodes to 1st LL
        newNode=new Node(30);
        head1.next.next=newNode;
        head1.next.next.next=null;
        //? find intersection
        Node intersectionPoint=ll.getIntersectionNode(head1,head2);
        //? print result
        if(intersectionPoint==null)
        {
            System.out.println("No Intersection Point");
        }
        else
        {
            System.out.println("Intersection Point : "+intersectionPoint.data);
        }
    }
}