//? Product of a and b
import java.util.*;
public class product_
{
    public static int mul(int a,int b)
    {
        int pro=a*b;
        return pro;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st no. :");
        int x=sc.nextInt();
        System.out.println("Enter 2nd no. :");
        int y=sc.nextInt();
        int p=mul(x,y);
        System.out.print("Product of "+x+" and "+y+" is "+p);
    }
}