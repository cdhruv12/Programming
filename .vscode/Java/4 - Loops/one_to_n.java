//? Print 1 to n
import java.util.*;
public class one_to_n{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the nth no. :");
        int c=1;
        int n=sc.nextInt();
        while(c<=n)
        {
            System.out.print(c + " ");
            c++;
        }
    }
}