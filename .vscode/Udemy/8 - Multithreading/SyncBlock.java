import java.util.*;
class Brackets
{
    synchronized public void generate() throws InterruptedException
    {
        for(int i=1;i<=20;i++)
        {
            Thread.sleep(10);
            if(i<=10)
            {
                System.out.print("[");
            }
            else
            {
                System.out.print("]");
            }
        }
        System.out.println();
        for(int i=0;i<10;i++)
        {
            Thread.sleep(30);
        }
    }
}
public class SyncBlock
{
    public static void main(String args[])
    {
        Brackets b=new Brackets();
        new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                long startTime=System.currentTimeMillis();
                try
                {
                    for(int i=1;i<=5;i++)
                    {
                        b.generate();
                    }
                }
                catch(InterruptedException e)
                {
                    e.printStackTrace();
                }
                long endTime=System.currentTimeMillis();
                System.out.println("Time taken by Thread 1 : "+(endTime-startTime)+" ms");
            }
        }).start();
        new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                long startTime=System.currentTimeMillis();
                try
                {
                    for(int i=1;i<5;i++)
                    {
                        b.generate();
                    }
                }
                catch(InterruptedException e)
                {
                    e.printStackTrace();
                }
                long endTime=System.currentTimeMillis();
                System.out.println("Time taken by Thread 2 : "+(endTime-startTime)+" ms");
            }
        }).start();
    }
}