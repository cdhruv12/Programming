//? Sum of Digits
import java.util.*;
public class sum_of_digit
{
    public static int sum(int n)    
    {
        int s=0;
        while (n>0)
        {
            int l=n%10;
            s=s+l;
            n=n/10;   
        }
        return s;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. :");
        int n=sc.nextInt();
        System.out.println("Sum of Digits is : "+sum(n));
    }
}
