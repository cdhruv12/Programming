//? Ternary Operator
import java.util.*;
public class ternary_operator
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter no. :");
        int n=sc.nextInt();
        String type=((n%2)==0)?"Even":"Odd";
        System.out.println(type);   
    }
}