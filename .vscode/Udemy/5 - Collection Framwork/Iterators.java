import java.util.*;
public class Iterators
{
    void printList(List<String>l)
    {
        Iterator<String>data=l.listIterator();
        while(data.hasNext())
        {
            System.out.println(data.next());
        }
    }
    public static void main(String[] args)
    {
        List<String>l2=new ArrayList<>();
        l2.add("Dhruv");
        l2.add("Chauhan");
        l2.add("Java");
        l2.add("Kulla");
        l2.add("kulla");
        Iterators i=new Iterators();
        i.printList(l2);
        l2.sort(null);
        System.out.println(l2);
        Collections.reverse(l2);
        System.out.println(l2);
    }
}