import java.util.*;
public class Scope
{
    public static int i=10;
    //? public int i=1; if class not static 
    public static void main(String args[])
    {
        {
            int i=100;
            System.out.println(i);
        }
        System.out.println("**********");
        System.out.println(i); //?In case of loop 1-10 : output is 10 cuz loop at 10 was where the condition was false in the loop
        //? System.out.println(new Scope().i); if not static 
    }
}