//? Half Pyramid Pattern
import java.util.*;
public class half_pyramid
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total lines needed :");
        int n=sc.nextInt();
        System.out.println("******* Half Pyramid Pattern *******");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print(j);
            }
            System.out.println();
        }
    }
}