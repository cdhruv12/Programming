import java.util.*;
public class JCFLL
{
    public static void main(String args[])
    {
        //? create
        LinkedList<Integer> ll=new LinkedList<>();
        //? add
        ll.addLast(1);
        ll.addLast(2);
        ll.addFirst(3);
        ll.add(4);
        //? print
        System.out.println(ll);
        //? remove
        ll.removeLast();
        System.out.println(ll);
        ll.removeFirst();
        System.out.println(ll);
        ll.remove();
        System.out.println(ll);
    }
}