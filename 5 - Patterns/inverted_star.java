//? Inverted star
import java.util.*;
public class inverted_star
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total lines needed :");
        int n=sc.nextInt();
        System.out.println("------- Inverted Star Pattern -------");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i+1;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}