import java.util.*;
class Vehicle
{
    private int id;
    public Vehicle(int id)
    {
        this.id=id;
    }
    @Override
    public String toString()
    {
        return String.valueOf(id);
    }
}
class Car extends Vehicle
{
    private String model;
    public Car(int id,String model)
    {
        super(id);
        this.model=model;
    }
    @Override
    public String toString()
    {
        return model+" "+super.toString();
    }
}
public class WildCard
{
    public static void main(String args[])
    {
        List<Vehicle>l=new ArrayList<>();
        l.add(new Vehicle(1));
        l.add(new Vehicle(2));
        l.add(new Vehicle(3));
        l.add(new Vehicle(4));
        l.add(new Car(5,"Celario"));
        WildCard.display(l);
    }
    public static void dispaly(List<?> l)
    {
        for(Object data:l)
        {
            System.out.println(data);
        }
    }
}