//? Fuction Overloading using parameters
import java.util.*;
public class overloading_using_parameters
{
    public static int sum(int a,int b)
    {
        return a+b;
    }
    public static int sum(int x,int y,int z)
    {
        return x+y+z;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int a=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int b=sc.nextInt();
        System.out.println("Do you want to continue :");
        char ch=sc.next().charAt(0);
        if(ch=='Y')
        {
            System.out.println("Enter 3rd no. :");
            int c=sc.nextInt();
            System.out.println("Sum of 3 no.s is "+sum(a,b,c));
        }
        else
        {
            System.out.println("Sum of 2 no.s is "+sum(a,b));
        }
    }
}