//? Pass or Fail
import java.util.*;
public class Pass_Fail
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter marks :");
        int m=sc.nextInt();
        String report= m>=33 ? "Pass" : "Fail";
        System.out.println(report);
    }
}