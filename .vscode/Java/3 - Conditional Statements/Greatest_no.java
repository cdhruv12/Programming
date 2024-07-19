//? Greatest of 3 no.s
import java.util.*;
public class Greatest_no
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int a=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int b=sc.nextInt();
        System.out.println("Enter 3rd no. :");
        int c=sc.nextInt();
        if(a==b && b==c && c==a)
        {
            System.out.println("All the 3 no.s are equal");
        }
        else if(a>b && a>c)
        {
            System.out.println("First no. is greatest no."); 
        }
        else if(b>a && b>c)
        {
            System.out.println("Second no. is greatest no.");
        }
        else
        {
            System.out.println("Third no. is greatest no.");    
        }
    }
}