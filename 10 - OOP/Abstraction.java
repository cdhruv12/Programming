public class Abstraction
{
    public static void main(String[] args)
    {
        /*Horse h=new Horse();
        h.eats();
        h.walk();
        h.changeColor();
        System.out.println(h.color);
        */

        Mustang m=new Mustang();

        /*
        Chicken c=new Chicken();
        c.eats();
        c.walk();
        System.out.println(c.color);
        */
    }
}
abstract class Animal
{
    String color;
    Animal()
    {
        System.out.println("Animal Constructor called");
    }
    Animal()
    {
        color="Brown";
    }
    void eats()
    {
        System.out.println("Eats");
    }
    abstract void walk();
}
class Horse extends Animal
{
    Horse()
    {
        System.out.println("Horse constructor called");
    }
    void walk()
    {
        System.out.println("Walks on 4 legs");
    }
    void changeColor()
    {
        color="White";
    }
}
class Mustang extends Horse
{
    Mustang()
    {
        System.out.println("Mustang constructor called");
    }
}
class Chicken extends Animal
{
    Chicken()
    {
        System.out.println("Chicken constructor called");
    }
    void walk()
    {
        System.out.println("Walks on 2 legs");
    }
    void changeColor()
    {
        color="Black";
    }
}