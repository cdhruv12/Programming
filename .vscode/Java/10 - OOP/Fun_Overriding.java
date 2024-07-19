public class Fun_Overriding
{
    public static void main(String[] args)
    {
        Deer d=new Deer();
        d.eat();
    }
}
class Animal
{
    void eat()
    {
        System.out.println("Eats");
    }
}
class Deer extends Animal
{
    void eat()
    {
        System.out.println("Eats grass");
    }
}