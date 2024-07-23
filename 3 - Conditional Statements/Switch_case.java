//? Switch cse
import java.util.*;
public class Switch_case
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. (1/2/3) :");
        int n=sc.nextInt();
        switch(n)
        {
            case 1:
                System.out.println("Samosa");
                break;
            case 2:
                System.out.println("Burgers");
                break;  
            case 3:
                System.out.println("Pizza");
                break;
            default:
                System.out.println("Wake Up Stop Dreaming");
        }
    }
}