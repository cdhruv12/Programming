//? Sum of even and odd
import java.util.*;
public class Sum_even_odd_Q
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        int evenSum=0;
        int oddSum=0;
        int choice;
        do
        {
            System.out.println("Enter no. :");
            n=sc.nextInt();
            if(n==0)
            {
                System.out.println("ERROR");
            }
            else if(n%2==0)
            {
                evenSum+=n;
            }
            else
            {
                oddSum+=n;
            }
            System.out.println("Do you want to continue(Press 1 to continue and 0 to discontinue) :");
            choice=sc.nextInt();
        }while(choice==1);
        System.out.println("Sum of all even integers is "+evenSum);
        System.out.println("Sum of all odd integers is "+oddSum);
    }
}