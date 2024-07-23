//? Average of 3 no.s
import java.util.*;
public class avg
{
    public static int Avg(int a,int b,int c)
    {
        return (a+b+c)/3;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. : ");
        int a=sc.nextInt();
        System.out .println("Enter 2nd no. :");
        int b=sc.nextInt();
        System.out.println("Enter 3rd no. : ");
        int c=sc.nextInt();
        System.out.println("Avg of 3 no.s is : "+ Avg(a,b,c)+"\n");
    }
}