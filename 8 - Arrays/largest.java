//? Largest value in array
import java.util.*;
public class largest
{
    public static int getlar(int no[])
    {
        int larg=Integer.MIN_VALUE;   //? -infinity
        int smll=Integer.MAX_VALUE;
        for (int i = 0; i < no.length; i++) 
        {
            if(larg<no[i])
            {
                larg=no[i];
            }    
            if(smll>no[i])
            {
                smll=no[i];
            }
        }
        System.out.println("Smallest no. is "+smll);
        return larg;
    }
    public static void main(String args[])
    {
        int no[]={1,2,3,4,5,6,7,8,9};
        System.out.println("Largest no. is "+getlar(no));
    }
}