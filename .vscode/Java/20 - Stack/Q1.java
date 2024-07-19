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
    public static Node head;
    public static boolean isPalindrome(Node head)
    {
        Node slow=head;
        boolean isPalin=true;
        Stack<Integer>s=new Stack<>();
        //? traverse list & push all elements into stack
        while(slow!=null)
        {
            s.push(slow.data);
            slow=slow.next;
        }
        //? traverse list again & compare with elements popped from stack
        while(head!=null)
        {
            int i=s.pop();
            if(head.data==i)
            {
                isPalin=true;
            }
            else 
            {
                isPalin=false;
                break;
            }
            head=head.next;
        }
        return isPalin;
    }
    public static void main(String args[])
    {
        Node head=new Node(1);
        head.next=new Node(2);
        head.next.next=new Node(3);
        head.next.next.next=new Node(2);
        head.next.next.next.next=new Node(1);
        boolean condition=isPalindrome(head);
        System.out.println("Palindrome : "+condition);
    }
}