import java.util.*;
public class ThrowKeyword
{
    public void doSomething()
    {
        String x="zero";
        if(x.equals("zero"))
        {
            throw new RuntimeException();
        }
        System.out.println("Do Something");
    }
    public static void main(String args[])
    {
        ThrowKeyword t=new ThrowKeyword();
        try 
        {
            t.doSomething();
        }
        finally
        {
            System.out.println("finally called");
        }
    }
}