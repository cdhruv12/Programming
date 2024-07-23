//? Find the Binomial Coefficient
import java.util.*;
public class binomial_coeff
{
    public static int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
    public static int binocoeff(int x,int y)    //?  x is n and y is r
    {
        int a=fact(x);
        int b=fact(y);
        int c=fact(x-y);
        int d=a/(b*c);
        return d;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int n=sc.nextInt();
        System.out.println("Enter the element r :");
        int r=sc.nextInt();
        int f=fact(n);
        int b=binocoeff(n,r);
        System.out.println("Binomial coeff is "+b);
    }
}