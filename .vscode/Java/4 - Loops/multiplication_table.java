//? Multiplication Table
import java.util.*;
public class multiplication_table
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. :");
        int n=sc.nextInt();
        System.out.println("******* Multiplication table of " + n + " *******");
        for(int i=1;i<=10;i++)
        {
            System.out.println(n + " X " + i + " = " + n*i);
        }
    }
}