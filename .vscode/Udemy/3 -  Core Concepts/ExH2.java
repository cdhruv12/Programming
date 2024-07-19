import java.util.*;
public class ExH2
{
    public static void main(String args[])
    {
        try
        {
            System.out.println("Before exception");
            System.out.println("Divide by zero "+10/0);
            System.out.println("After exception");
        }
        catch(Exception e)
        {
            System.out.println("Before exception catch");
            System.out.println("Error : cannot divide by zero || "+e);
            System.out.println("After e");
            e.printStackTrace();
            System.out.println("After printStackTrace");
        }
        
    }
}