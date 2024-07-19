//? Calculator
import java.util.*;
public class Calculator
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int a = sc.nextInt();
        System.out.print("Enter the second number: ");
        int b = sc.nextInt();  
        System.out.println("Enter the operator :");
        char operator=sc.next().charAt(0);
        switch(operator)
        {
            case '+':
                System.out.println("Addition is 2 no.s is :" + (a+b));    
                break;
            case '-':
                System.out.println("Subraction of 2 no.s is :" + (a-b));    
                break;  
            case '*':
                System.out.println("Multiplication is 2 no.s is :" + (a*b)) ;
                break;
            case '/':
                System.out.println("Division is 2 no.s is :" + (a/b));
                break;
            default:
                System.out.println("Invalid operator");
                break;
        }
    }
}