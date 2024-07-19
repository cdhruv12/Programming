import java.util.*;
class Data<K extends Integer,V extends String>
{  
    private K key;
    private V value;
    public Data(K key,V value)
    {
        this.key=key;
        this.value=value;
    }
    public K getKey()
    {
        return key;
    }
    public V getValue()
    {
        return value;
    }
    @Override
    public String toString()
    {
        return key+" "+value;
    }
}
public class CustomSortingWComparator
{
    public static void main(String args[])
    {
        Comparator<Data<Integer,String>>COMPARE_KEY=new Comparator<Data<Integer,String>>()
        {
            @Override
            public int compare(Data<Integer,String>obj1,Data<Integer,String>obj2)
            {
                if(obj1.getKey()<obj2.getKey())
                {
                    return -1;
                }
                else if(obj1.getKey()>obj2.getKey())
                {
                    return 1;
                }
                return 0;
            }
        };
        Set<Data<Integer,String>>set=new TreeSet<>(COMPARE_KEY);
        set.add(new Data<>(1,"Dhruv"));
        set.add(new Data<>(2,"Chauhan"));
        set.add(new Data<>(3,"Kulla"));
        set.add(new Data<>(4,"Tegta"));
        for(Data data:set)
        {
            System.out.println(data);
        }
    }
}