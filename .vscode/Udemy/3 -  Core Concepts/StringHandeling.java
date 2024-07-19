import java.util.*;
public class StringHandeling
{
    public static void main(String args[])
    {
        String a="Dhruv";
        String b="Chauhan";
        String c=a+b;
        System.out.println(c);
        if(a=="Dhruv")
        {
            System.out.println("hi");
        }
        else
        {
            System.out.println("bye");
        }
        if(c=="DhruvChauhan") //? there is a issue with c as c is a+b
        {
            System.out.println("ON");
        }
        else
        {
            System.out.println("OFF");
        }
        if(c.equals("DhruvChauhan")) //? for this need equals() method
        {
            System.out.println("yes");
        }
        else
        {
            System.out.println("no");
        }
        String d=a.concat(b);
        System.out.println(d);
        if(d=="DhruvChauhan") //? will ot work
        {
            System.out.println("yes");
        }
        else
        {
            System.out.println("no");
        }
        if(d.equals("DhruvChauhan"))
        {
            System.out.println("yes");
        }
        else
        {
            System.out.println("no");
        }
        if(d.equals(a+b))
        {
            System.out.println("yes");
        }
        else
        {
            System.out.println("no");
        }
        System.out.println(c.replace("Chauhan","C"));
    }
}