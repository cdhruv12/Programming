import java.util.*;
public class Generics
{
    public static void main(String args[])
    {
        Data d=new Data("Some data");
        String x=(String)d.getObject();
        System.out.println(x);
        System.out.println("-----------");
        GenericData<String>gD=new GenericData<String>("Some generic data");
        //? with the use of <String> no need to specify y=(String)gD.getData
        String y=gD.getData();
        System.out.println(y);
    }
}
class Data 
{
    private Object object;
    public Data(Object object)
    {
        this.object=object;
    }
    public Object getObject()
    {
        return object;
    }
}
class GenericData<T>
{
    private T data;
    public GenericData(T data)
    {
        this.data=data;
    }
    public T getData()
    {
        return data;
    }
}