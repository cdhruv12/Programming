import java.util.*;
import java.util.concurrent.LinkedBlockingDeque;
public class DequeQ
{
    public static void main(String args[])
    {
        Deque<Integer>d=new LinkedBlockingDeque<>();
        d.offer(1);
        d.offer(2);
        d.offer(3);
        System.out.println(d);
        d.addFirst(0);
        System.out.println(d);
        d.addLast(4);
        System.out.println(d);
        d.removeFirst();
        System.out.println(d);
        d.removeLast();
        System.out.println(d);
    }
}