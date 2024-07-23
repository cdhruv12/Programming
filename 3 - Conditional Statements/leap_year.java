//? Leap year or not
import java.util.*;
public class leap_year
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter year : ");
        int year=sc.nextInt();
        boolean x=(year%4)==0;
        boolean y=(year%100)!=0;
        boolean z=(year%400)==0;
        if(x&&(y||z))
        {
            System.out.println(year + " year is a Leap Year");
        }
        else
        {
            System.out.println(year + " year is not a Leap Year");
        }
    }
}