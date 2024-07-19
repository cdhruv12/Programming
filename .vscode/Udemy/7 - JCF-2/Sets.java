import java.util.*;
public class Sets
{
    public static void main(String args[])
    {
        Set<String>set=new HashSet<>();
        set.add("Dhruv");
        set.add("Chauhan");
        set.add("Kulla");
        set.add("Tegta");
        set.add("chauhan");
        System.out.println(set);
        for(String name:set)
        {
            System.out.println(name);
        }
        System.out.println(set.contains("Dhruv"));
        System.out.println(set.contains("dhruv"));
    }
}