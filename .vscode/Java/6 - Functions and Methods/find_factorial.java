//? Find Factorial 
import java.util.*;
public class find_factorial
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
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of elements :");
        int m=sc.nextInt();
        int f=fact(m);  
        System.out.println("Factorial of "+m+" is "+f);
    }
}
