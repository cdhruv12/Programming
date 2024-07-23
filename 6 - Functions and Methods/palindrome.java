//? Palindrome
import java.util.*;
public class palindrome
{
    public static boolean isPalindrome(int n)
    {
        int p=n;
        int rev=0;
        while(p!=0)
        {
            int rem=p%10;
            rev=rev*10+rem;
            p=p/10;
        }
        if (n==rev) 
        {
            return true;    
        }
        else
        {
            return false;
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=sc.nextInt();
        if(isPalindrome(n))
        {
            System.out.println("The given number "+n+" is a Palindrome");
        }
        else
        {
            System.out.println("The given number "+n+" is not a Palindrome");

        }
    }
}