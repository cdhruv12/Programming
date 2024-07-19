import java.util.*;
class Data<K extends Integer,V extends Name>
{
    private K key;
    private V value;
    public Data(K key, V value)
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
    public<N extends Number,E> void display(N number,E element) 
    {
        System.out.println("Number : "+number+" Element : "+element);
    }
}
class Name
{
    private String name;
    public Name(String name)
    {
        this.name=name;
    }
    @Override
    public String toString()
    {
        return name;
    }
}
public class BoundedTypeParameter
{
    public static void main(String args[])
    {
        Data<Integer,Name>d=new Data<>(1,new Name("Dhruv"));
        System.out.println(d);
        d.display(25,'$');
        d.display(12 ,"&");
    }
}