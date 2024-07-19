//? Age 
import java.util.*;
public class age
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter age : ");
        int age=sc.nextInt();
        if(age>=18)
        {
            System.out.println("You are an Adult");
        }
        else if(age>=13 && age <18)
        {
            System.out.println("You are an Teenager");
        }
        else
        {
            System.out.println("You are an child");
        }
    }
}