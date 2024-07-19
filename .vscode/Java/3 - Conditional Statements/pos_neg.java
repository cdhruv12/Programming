//? Postive or Negative no.
import java.util.*;
public class pos_neg
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. :");
        int n = sc.nextInt();
        if(n==0)
        {
            System.out.println("No. is Zero");
        }
        else if(n>0)
        {
            System.out.println("No. is Positive");  
        }
        else
        {
            System.out.println("No. is Negative");
        }
    }
}