import java.util.*;
class Data<T> 
{
    private T object;
    public Data(T object)
    {
        this.object=object;
    }
    @Override
    public String toString()
    {
        return object.toString();
    }
}
public class ListGenerics
{
    public static void main(String args[])
    {
        List<Data<Object>>l=new LinkedList<>();
        l.add(new Data<>("Dhruv"));
        l.add(new Data<>("$"));
        l.add(new Data<>(12));
        l.add(new Data<>(12.23));
        for(Object data:l)
        {
            System.out.println(data);
        }
    }
}