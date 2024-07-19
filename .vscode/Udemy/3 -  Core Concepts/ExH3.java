import java.util.*;
public class ExH3
{
    public static void main(String args[])
    {
        int y=0,x;
        try
        {
            System.out.println("Before exception");
            //? System.out.println("Divide by zero "+10/0);
            x=(y=10*10)/0; //? even if you put y it will get executed also while putting y then down at the end y is 100 at fianlly statement 
            System.out.println("After exception");
        }
        catch(ArithmeticException e)
        {
            System.out.println("Before Arithmeticexception");
            System.out.println("Error : cannot divide by zero for arithmetic exception || "+e);
            System.out.println("After arithmetic e");
            e.printStackTrace();
            System.out.println("After printStackTrace arithmetic");
        }       
        catch(Exception e)
        {
            System.out.println("Before exception catch");
            System.out.println("Error : cannot divide by zero || "+e);
            System.out.println("After e");
            e.printStackTrace();
            System.out.println("After printStackTrace");
        }
        finally
        {
            System.out.println("Before finally");
            System.out.println(y);
            System.out.println("After finally");
        }
    }
}