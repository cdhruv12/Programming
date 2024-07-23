//? Average of 3 no.s 
import java.util.*;
public class Avg_of_nos   
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int a=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int b=sc.nextInt();
        System.out.println("Enter 3rd no.");
        int c=sc.nextInt();
        System.out.print("Average of 3 no. is : ");
        System.out.print((a+b+c)/3);
    }
}