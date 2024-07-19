import java.util.*;
public class Q4
{
    static void reverse(Queue<Integer>q,int k)
    {
        //? edge case check
        if(q.isEmpty() || k>q.size() || k<=0)
        {
            return;
        }
        //? stack-> to hold 1st k elements
        Stack<Integer>s=new Stack<>();
        //? push 1st k elemnt from queue into stack
        for(int i=0;i<k;i++)
        {
            s.push(q.remove());
        }
        //? enqueue element from stack back to queue
        while(!s.isEmpty())
        {
            q.add(s.pop());
        }
        //? move remaining elemnts in queue back to maintain order
        for(int i=0;i<q.size()-k;i++)
        {
            q.add(q.remove());
        }
    }
    public static void main(String args[])
    {
        Queue<Integer>q=new LinkedList<>();
        q.add(10);
        q.add(20);
        q.add(30);
        q.add(40);
        q.add(50);
        q.add(60);
        q.add(70);
        q.add(80);
        q.add(90);
        q.add(100);
        int k=5;
        reverse(q,k);
        System.out.println("Queue after reversing first "+k+" element : "+q);
    }
}