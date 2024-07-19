import java.util.*;
public class LL
{
    public static void main(String args[])
    {
        LinkedList<String>ll=new LinkedList<>();
        ll.add("Dhruv");
        ll.add("Chuahan");
        ll.add("Kulla");
        System.out.println(ll);
        ll.set(0,"DC");
        System.out.println(ll);
        ll.add(1,"Dhruv");
        System.out.println(ll);
        ll.remove();
        System.out.println(ll);
        ll.remove(0);
        System.out.println(ll);
    }
}