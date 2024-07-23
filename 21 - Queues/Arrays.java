import java.util.*;
public class Arrays
{
    public static class Queues
    {
        static int arr[];
        static int size;
        static int rear;
        public Queues(int n)
        {
            arr=new int[n];
            size=n;
            rear=-1;
        }
        //? empty?
        public static boolean isEmpty()
        {
            return rear==-1;
        }
        //? enqueue
        public static void enque(int data)
        {
            if(rear==size-1)
            {
                System.out.println("Overflow");
                return;
            }
            rear=rear+1;
            arr[rear]=data;
        }
        //? dequeue
        public static int dequeue()
        {
            if(isEmpty())
            {
                System.out.println("Underflow");
                return -1;
            }
            int front=arr[0];
            for(int i=0;i<rear;i++)
            {
                arr[i]=arr[i+1];
            }
            rear=rear-1;
            return front;
        }
        //? peek
        public static int peek()
        {
            if(isEmpty())
            {
                System.out.println("Underflow");
                return-1;
            }
            return arr[0];
        }
    }
    public static void main(String args[])
    {
        Queues q=new Queues(3);
        q.enque(1);
        q.enque(2);
        q.enque(3);
        while(!q.isEmpty())
        {
            System.out.println(q.peek());
            q.dequeue();
        }
    }
}