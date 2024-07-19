import java.util.*;
public class Vectors
{
    public static void main(String args[])
    {
        Stack<Integer>s=new Stack<>();
        s.push(12);
        s.push(23);
        s.push(34);
        System.out.println(s);
        System.out.println(s.search(34));
        System.out.println(s.indexOf(34));
        System.out.println(s.get(2));
    }
}