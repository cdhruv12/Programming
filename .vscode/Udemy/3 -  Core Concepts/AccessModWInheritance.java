import java.util.*;
public class AccessModWInheritance
{
    public static void main(String args[])
    {
        Sub sub=new Sub();
        System.out.println(sub.x);
        //? System.out.println(sub.y);
        System.out.println(sub.z);
    }
    public static class Base
    {
        int x=10;
        //? private int y=12;
        protected int z=23;
    }
    public static class Sub extends Base
    {

    }
}