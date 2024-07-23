//? Call by value
import java.util.*;
public class call_by_value
{
    public static int swap(int a,int b)
    {
        int temp=a;
        a=b;
        b=temp;
        System.out.println("a = "+a+"\nb = "+b);
        return temp;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int a=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int b=sc.nextInt();
        System.out.println("***Before swap ***\na = "+a+"\nb = "+b);
        System.out.println("**** After Swap ****");
        int s=swap(a,b);
    }
}