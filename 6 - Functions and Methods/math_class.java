//? Math class in Java
import java.util.*;
public class math_class
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. :");
        int x=sc.nextInt();
        System.out.println("Enter no. :");
        int y=sc.nextInt();
        System.out.println("Min. of the 2 no.s is "+Math.min(x,y));
        System.out.println("Max. of the 2 no.s is "+Math.max(x,y));
        System.out.println("Sqrt. of "+x+" is "+Math.sqrt(x));
        System.out.println("Sqrt. of "+y+" is "+Math.sqrt(y));
        System.out.println("Value of "+x+" power "+y+" is "+Math.pow(x,y));
        System.out.println("Value of "+y+" power "+x+" is "+Math.pow(y,x));
        //System.out.println("Avg. of the 2 no.s is "+Math.avg(x,y));
        System.out.println("Absolute value of "+x+" is "+Math.abs(x));
        System.out.println("Absolute value of "+y+" is "+Math.abs(y));
    }

}