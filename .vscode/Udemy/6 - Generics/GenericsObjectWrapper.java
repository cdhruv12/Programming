import java.util.*;
public class GenericsObjectWrapper
{
    static class Data
    {
        private Object object;
        public Data(Object object)
        {
            this.object=object;
        }
        @Override
        public String toString()
        {
            return object.toString();
        }
        public Object  getObject()
        {
            return object;
        }
    }
    static class Name
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
    public static void main(String args[])
    {
        List<Data>l=new LinkedList<>();
        l.add(new Data("Dhruv"));
        l.add(new Data("$"));
        l.add(new Data(25));
        l.add(new Data(12.23));
        l.add(new Data(new Name("Chauhan")));
        System.out.println(l);
        Data x=new Data("Hello World");
        System.out.println(x);
    }
}