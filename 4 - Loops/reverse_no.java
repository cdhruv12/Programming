//? Reverse a No.
import java.util.*;
public class reverse_no
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. :");
        int n=sc.nextInt();
        while(n>0)
        {
            int lastDigit=n%10;
            System.out.print(lastDigit);
            n=n/10;
        }
        System.out.println();
    }
}