import java.util.*;
public class ExceptionHandeling
{
    public static void main(String args[])
    {
        ExceptionHandeling ex=new ExceptionHandeling();
        ex.case1(10,5);
        ex.case1(10,0);
        ex.case2(10,5);
        ex.case2(10,0);
    }
    public void case1(int x,int y)
    {
        if(y!=0)
        {
            System.out.println("x/y="+x/y);
        }
        else
        {
            System.out.println("Value of y is zero , a possible exception");
        }
    }
    public void case2(int x,int y)
    {
        try
        {
            System.out.println("x/y="+x/y);
        }
        catch(Exception e)
        {
            System.out.println("Value of y is zero , a possible exception "+e);
        }
    }
}