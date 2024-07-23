import java.util.*;
public class Queuew2Stack
{
    static class Queue
    {
        static Stack<Integer>s1=new Stack<>();
        static Stack<Integer>s2=new Stack<>();
        public static boolean isEmpty()
        {
            return s1.isEmpty();
        }
        //? add
        public static void enqueue(int data)
        {
            while(!s1.isEmpty())
            {
                s2.push(s1.pop());
            }
            s1.push(data);
            while(!s2.isEmpty())
            {
                s1.push(s2.pop());
            }
        }
        //? remove
        public static int dequeue()
        {
            if(s1.isEmpty())
            {
                System.out.println("Underflow");
            }
            return s1.pop();
        }
        //? peek
        public static int peek()
        {
            if(s1.isEmpty())
            {
                System.out.println("Underflow");
            }
            return s1.peek();
        }
    }
    public static void main(String args[])
    {
        Queue q=new Queue();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        while(!q.isEmpty())
        {
            System.out.println(q.peek());
            q.dequeue();
        }
    }
}