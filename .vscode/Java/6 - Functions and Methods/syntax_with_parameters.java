//? Syntax with Parameters
import java.util.*;
public class syntax_with_parameters
{
    public static int cal(int n,int m)
    {
        int sum=n+m;
        return sum;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int a=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int b=sc.nextInt();
        System.out.println("Sum of no.s is :");
        int sum=cal(a,b);
        System.out.println(sum);
    }
}