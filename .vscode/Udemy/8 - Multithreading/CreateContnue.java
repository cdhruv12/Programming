/**
 * The class `MyCounter` extends `Thread` and creates two threads to count up to 10 with a delay of 300
 * milliseconds between each count, and the `CreateContnue` class runs these threads sequentially and
 * calculates the total processing time.
 */
import java.util.*;
import static java.lang.Thread.sleep;
//? only running on one thread
class MyCounter extends Thread
{
    private int threadNo;
    public MyCounter(int threadNo)
    {
        this.threadNo=threadNo;
    }
    @Override
    public void run()
    {
        try
        {
            countMe();
        }
        catch(InterruptedException e)
        {
            e.printStackTrace();
        }
    }
    public void countMe() throws InterruptedException
    {
        for(int i=0;i<10;i++)
        {
            Thread.sleep(300);
            System.out.println("Thread No. : "+threadNo+" and Iterations no. :"+i);
        }
    }
}
public class CreateContnue
{
    public static void main(String args[]) throws InterruptedException
    {
        MyCounter c1=new MyCounter(1);
        MyCounter c2=new MyCounter(2);
        MyCounter c3=new MyCounter(3);
        long startTime=System.currentTimeMillis();
        c1.start();
        System.out.println("--------------------------------------");
        c2.start();
        System.out.println("--------------------------------------");
        c3.start();
        Thread.sleep(1000);
        long endTime=System.currentTimeMillis();
        System.out.println("Total time required for processing : "+(endTime-startTime));
    }
}