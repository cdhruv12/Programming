import java.util.*;
public class AccessModwoInheritance
{
    public static void main(String args[])
    {
        Others others=new Others();
        //? System.out.println(others.x); // x is not public and cannot be used outside package
        System.out.println(others.x);
        others.message();
    }
    public static class Others
    {
        //? int x=10; //need to make it public 
        public int x=10;
        public void message()
        {
            System.out.println(x);
        }
    }
}