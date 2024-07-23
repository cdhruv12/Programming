//? Break Keyword
import java.util.*;
public class break_keyword
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        do
        {
            System.out.println("Enter no. :");
            int n=sc.nextInt();
            System.out.println(n);
            if(n%10==0)
            {
                break;
            }
        }while(true);
    }
}