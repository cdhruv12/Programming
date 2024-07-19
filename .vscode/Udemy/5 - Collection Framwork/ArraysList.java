import java.util.*;
public class ArraysList
{
    public static void main(String args[])
    {
        ArrayList<String>list=new ArrayList<>();
        list.add("Dhruv");  
        list.add("Chauhan");
        System.out.println(list);
        System.out.println(list.get(1));
        list.remove(1);
        System.out.println(list);
        list.add("Chauhan");
        list.remove("Chauhan");
        System.out.println(list.set(0,"D"));
        System.out.println(list);
        //? System.out.println(list.set("D","Dhruv")); error
        System.out.println(list);
        System.out.println(list.indexOf("Dhruv"));
        System.out.println(list.indexOf("D"));
    }
}