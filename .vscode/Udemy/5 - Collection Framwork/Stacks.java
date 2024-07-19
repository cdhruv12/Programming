import java.util.*;
public class Stacks
{
    public static void main(String args[])
    {
        Stack<Integer>s=new Stack<>();
        s.push(10);
        s.push(12);
        s.push(23);
        System.out.println(s);
        System.out.println(s.search(12));
        s.pop();
        System.out.println(s);
        System.out.println(s.pop());
        System.out.println(s);
    }
}