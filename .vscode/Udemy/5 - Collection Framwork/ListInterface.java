import java.util.*;
public class ListInterface
{
    public static void main(String args[])
    {
        LinkedList<String>l1=new LinkedList<>();
        l1.add("a");
        l1.add("b");
        l1.add("c");
        ArrayList<String>l2=new ArrayList<>();
        l2.add("d");
        l2.add("e");
        l2.add("f");
        System.out.println(l1);
        System.out.println(l2);
        for(String l:l1)
        {
            System.out.println(l);
        }
        System.out.println("************");
        for(String l:l2)
        {
            System.out.println(l);
        }
        System.out.println("************");
        new ListInterface().printList1(l2);//? cannot take l1 as it is LL not ArrayList
        System.out.println("************");
        new ListInterface().printList2(l1);
        System.out.println("************");
        new ListInterface().printList3(l1);
        System.out.println("************");
        new ListInterface().printList3(l2);
    }
    //? only for ArrayList
    void printList1(ArrayList<String> l) 
    {
        for(String list:l)
        {
            System.out.println(list);
        }
    }
    //? only for LinkedList
    void printList2(LinkedList<String> l) 
    {
        for(String list:l)
        {
            System.out.println(list);
        }
    }
    //? Interface list
    void printList3(List<String> l)
    {
        for(String list:l)
        {
            System.out.println(list);
        }
    }
}