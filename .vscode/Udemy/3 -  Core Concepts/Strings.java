import java.util.*;
public class Strings
{
    public static void main(String args[])
    {
        String a="Dhruv";
        String b="Chauhan";
        String c=a+b;
        String d=a.concat(b);
        d=d.replace("Chauhan","C");
        System.out.println(c);
        System.out.println(a+b);
        System.out.println(d);
        if(c=="DhruvChuahan")
        {
            System.out.println("Equal");
        }
        if(d=="DhruvC")
        {
            System.out.println("Same");
        }
        else
        {
            System.out.println("Not same");
        }
    }
}