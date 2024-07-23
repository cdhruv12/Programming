//? Factorial of a no. Q
import java.util.*;
public class factorial_Q
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int fact=1;
        System.out.println("Enter +ve integer :");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        System.out.println("Factorial of " + n + " is " + fact);
    }
}