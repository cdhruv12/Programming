//? Cost of Items
import java.util.*;
public class Cost{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter cost of pencil : ");
        float p=sc.nextFloat();    
        System.out.println("Enter cost of pen : ");
        float n=sc.nextFloat();
        System.out.println("Enter cost of eraser : ");
        float e=sc.nextFloat();
        System.out.println("Total cost is : ");
        System.out.println(p+n+e);
        System.out.println("Total cost with 18% gst is : ");
        System.out.println((p+n+e)+(((p+n+e)*18)/100));
    }
}