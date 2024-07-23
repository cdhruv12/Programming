//Area of Circle
import java.util.*;
public class Area_of_Circle
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter radius of circle");
        float r=sc.nextFloat();
        float a=3.14f*r*r;
        System.out.print("Area of Circle is ");
        System.out.print(a);
    }
}