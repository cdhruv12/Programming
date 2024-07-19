import java.util.*;
public class UserDefinedException
{
    class ZeroException extends Exception 
    {

    }
    public void doSomething() throws ZeroException
    {
        String x="One";
        if(x.equals("zero"))
        {
            throw new ZeroException();
        }
        System.out.println("Do Something");
    }
    public static void main(String args[])
    {
        UserDefinedException obj=new UserDefinedException();
        try
        {
            obj.doSomething();
        }
        catch(ZeroException e)
        {
            e.printStackTrace();
        }
    }
}