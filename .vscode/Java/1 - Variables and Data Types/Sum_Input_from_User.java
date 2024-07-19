//INput fromm user as Sum of a & b
import java.util.*;
public class Sum_Input_from_User
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no.");
        int a=sc.nextInt();
        System.out.println("Enter 2nd no.");
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("Additon of 2 the no.s is ");
        System.out.println(sum);
    }
}