public class Inheritance
{
    public static void main(String[] args)
    {
        Fish f1=new Fish();
        f1.eat();
        f1.breathe();
        f1.swim();
        f1.color="Blue";
        System.out.println("Fish color : "+f1.color);
        f1.fins=3;
        System.out.println("Total fins : "+f1.fins);

    }
}
class Animal
{
    String color;
    void eat()
    {
        System.out.println("Eats");
    }
    void breathe()
    {
        System.out.println("Breathes");
    }
}
class Fish extends Animal
{
    int fins;
    void swim()
    {
        System.out.println("Swims");
    }
}
