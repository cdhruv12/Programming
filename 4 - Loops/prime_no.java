//? Prime no.
import java.util.*;
public class prime_no
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. :");
        int n=sc.nextInt();
        if(n==2)
        {
            System.out.println(n + " is a prime no.");
        }
        else
        {
            boolean isPrime=true;
            for(int i=2;i<=n-1;i++)
            {
                if(n%i==0)
                {
                    isPrime=false;
                }
            }
            if(isPrime==true)
            {
                System.out.println(n + " is prime no.");
            }
            else
            {
                System.out.println(n + " is not prime no.");
            }
        }
    }
}