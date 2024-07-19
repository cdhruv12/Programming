//? Income tax Calculator
import java.util.*;

import javax.lang.model.util.ElementScanner14;
public class Income_tax_Cal
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter income :");
        long income=sc.nextLong();
        long tax;
        if(income<500000)
        {
            tax=0;
        }
        else if(income>=500000 && income<=1000000)
        {
            tax=(long)(income*0.2);
        }
        else 
        {
            tax=(long)(income*0.3);
        }
        System.out.println("The Tax you need to pay is :  " + tax);
    }
}