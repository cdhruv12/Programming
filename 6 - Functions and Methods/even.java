//? is Even
import java.util.*;
public class even
{
    public static boolean isEven(int n)
    {
        if(n%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        if(isEven(n))
        {
            System.out.println("The number is even");
        }
        else
        {
            System.out.println("The number is odd");
        }  
    } 
}