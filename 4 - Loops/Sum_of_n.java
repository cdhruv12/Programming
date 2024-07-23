//? Sum of 1st n natural no.s
import java.util.*;
public class Sum_of_n
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int s=0;
        int i=1;
        System.out.println("Enter the nth no. :");
        int n=sc.nextInt();
        while(i<=n)
        {
            s=s+i;
            i++;
        }
        System.out.print("Sum of n natural no.s is " + s);
    }
}