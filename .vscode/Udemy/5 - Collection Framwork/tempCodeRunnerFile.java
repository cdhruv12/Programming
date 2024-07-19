import java.util.*;
public class Compare 
{
    //? Inner class Name that implements Comparable<Name>
    class Name implements Comparable<Name>
    {
        private String name;
        //? constructor to intialize the name
        public Name(String name)
        {
            this.name=name;
        }
        //? Ovveride toString method to return the name
        @Override
        public String toString()
        {
            return name;
        }
        //? Ovveride compareTo method to define comparison logic
        @Override
        public int compreTo(Object o)
        {
            return this.name.compareTo(o.name);
        }
    }
    public static void main(String args[])
    {
        //? Create instance of Compare to acess inner class Name
        Compare c=new Compare();
        //? create list to store Name objects 
        List names=new LinkedList<>();
        //? Add Name to list
        names.add(c.new Name("Dhruv"));
        names.add(c.new Name("Chauhan"));
        names.add(c.new Name("Kulla"));
        names.add(c.new Name("Tegta"));
        //? print orignal list
        System.out.println(names);
        //? sort list using natural ordering define in comapreTo
        names.sort(null);
        //? print sorted list
        System.out.println(names);
    }
}