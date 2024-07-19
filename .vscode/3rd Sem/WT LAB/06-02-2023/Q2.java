import java.util.*;
public class Q2 
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
    public static void Armstrong(int n)
    {
        int cubeSum = 0, num, r;
        num = n;
        while (num > 0)
        {
            r = num % 10;
            cubeSum = cubeSum + (r * r * r);
            num = num / 10;
        }
        if (n == cubeSum)
        {
            System.out.println("Armstrong Number");
        }
        else
        {
            System.out.println("Not Armstrong Number");
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
            Armstrong(n); 
        }  
}
