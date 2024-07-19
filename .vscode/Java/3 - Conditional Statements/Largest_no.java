//? Largest of 2 no.s
import java.util.*;
public class Largest_no
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int A=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int B=sc.nextInt();
        if(A>B)
        {
            System.out.println("1st no. is the largest no.");
        }
        else if(A==B)
        {
            System.out.println("Both the no.s are equal");
        }
        else
        {
            System.out.println("2nd no. is the largest no.");
        }
    }
}