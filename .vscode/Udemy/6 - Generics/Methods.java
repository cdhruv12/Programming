import java.util.*;
class Data 
{
    public <E> void printListData(List<E>list)
    {
        for(E element:list)
        {
            System.out.println(element);
        }
    }
    public <E> void printArrayData(E[] arrayData)
    {
        for(E element:arrayData)
        {
            System.out.println(element);
        }
    }
}
public class Methods
{
    public static void main(String args[])
    {
        List<Integer>l1=new ArrayList<>();
        l1.add(12);
        l1.add(23);
        l1.add(34);
        l1.add(45);
        l1.add(56);
        new Data().printListData(l1);
        System.out.println("----------");
        List<String>l2=new ArrayList<>();
        l2.add("Dhruv");
        l2.add("Chauhan");
        l2.add("Kulla");
        new Data().printListData(l2);
        System.out.println("----------");
        String stringArray[]={"One","Two","Three"};
        new Data().printArrayData(stringArray);
        System.out.println("------------");
        //? int will not work 
        Integer intArray[]={1,2,3};
        new Data().printArrayData(intArray);
    }
}