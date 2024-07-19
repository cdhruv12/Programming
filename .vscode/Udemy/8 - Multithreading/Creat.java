import java.util.*;
import java.util.Objects;
//? only running on one thread
class MyCounter
{
    private int threadNo;
    public MyCounter(int threadNo)
    {
        this.threadNo=threadNo;
    }
    public void countMe() throws InterruptedException
    {
        for(int i=0;i<10;i++)
        {

    public Creat() {
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Creat)) {
            return false;
        }
        Creat creat = (Creat) o;
        return Objects.equals(this, creat);
    }

    @Override
    public int hashCode() {
        return super.hashCode();
    }

    @Override
    public String toString() {
        return "{" +
            "}";
    }
            Thread.sleep(300);
            System.out.println("Thread No. : "+threadNo+" and Iterations no. :"+i);
        }
    }
}
public class Creat
{
    public static void main(String args[]) throws InterruptedException
    {
        MyCounter c1=new MyCounter(1);
        MyCounter c2=new MyCounter(2);
        long startTime=System.currentTimeMillis();
        c1.countMe();
        System.out.println("--------------------------------------");
        c2.countMe();
        long endTime=System.currentTimeMillis();
        System.out.println("Total time required for processing : "+(endTime-startTime));
    }
}