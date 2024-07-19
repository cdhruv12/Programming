import java.util.*;
public class Types
{
    public static void main(String args[])
    {
        Set set=new HashSet();
        for(int i=30;i>=0;i--)
        {
            set.add("A"+i);
        }
        System.out.println(set);
        Set Lset=new LinkedHashSet();
        for(int i=30;i>=0;i--)
        {
            Lset.add("A"+i);
        }
        System.out.println("-----------");
        System.out.println(Lset);
        Set<String>tSet=new TreeSet();
        for(int i=30;i>=0;i--)
        {
            tSet.add("A"+i);
        }
        System.out.println("-----------");
        for(String x:tSet)
        {
            System.out.println(x);
        }
    }
}