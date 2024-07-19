import java.util.*;
class Data<K,V>
{
    //? generic data class
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
        return key +" "+ value;
    }
    //? generic
    public<E,N> void display(E element,N number)
    {
        System.out.println("Element : "+element+" | Number : "+number);
    }
}
public class Parameters
{
    public static void main(String args[])
    {
        Data<Integer,String>d=new Data<>(12,"Dhruv");
        System.out.println("Key : "+d.getKey()+" | Value : "+d.getValue());
        d.display("Test",23);
    }
}