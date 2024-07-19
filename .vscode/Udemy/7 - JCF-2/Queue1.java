import java.util.*;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ArrayBlockingQueue;
public class Queue1
{
    public static void main(String args[])
    {
        //? cannot take null values 
        //? Queue q=new LinkedBlockingDeque();
        //? Queue<Integer>q=new LinkedBlockingDeque<>(5);
        Queue<Integer>q=new ArrayBlockingQueue(5);
        q.poll();
        try
        {
            q.offer(1);
            q.offer(2);
            q.offer(3);
            q.offer(4);
            q.offer(5);
            q.offer(6);
            q.remove();
            q.offer(7);
        }
        catch(Exception e)
        {
            System.out.println("Something went wrong "+e);
        }
        System.out.println(q);
    }
}