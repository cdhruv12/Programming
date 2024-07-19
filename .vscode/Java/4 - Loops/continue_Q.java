//? Continue Keyword Question
import java.util.*;
public class continue_Q
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        do
        {
            System.out.println("Enter no. :");
            int n=sc.nextInt();
            if(n%10==0)
            {
                continue;
            }
            System.out.println("Your no. was " + n);
        }while(true);
    }
}