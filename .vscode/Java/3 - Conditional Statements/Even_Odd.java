//? No. is even or odd
import java.util.*;

import javax.lang.model.util.ElementScanner14;
public class Even_Odd
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. :");
        int n=sc.nextInt();
        if (n==0) 
        {
            System.out.println("No. entered is zero");   
        }
        else if (n%2==0) 
        {
            System.out.println("No. is Even");    
        }
        else
        {
            System.out.println("No. is Odd");
        }
    }
}