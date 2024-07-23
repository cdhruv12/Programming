public class Hierarcheil
{
    public static void main(String[] args)
    {
        Mammal m=new Mammal();
        m.eat();
        m.breathe();
        m.walk();
        Fish f=new Fish();
        f.eat();
        f.breathe();
        f.swim();
        Bird b=new Bird();
        b.eat();
        b.breathe();
        b.fly();
    }
}
class Animal
{
    void eat()
    {
        System.out.println("Can eat");
    }
    void breathe()
    {
        System.out.println("Can breathe");
    }
}
class Mammal extends Animal
{
    void walk()
    {
        System.out.println("Mammals can walk");
    }
}
class Fish extends Animal
{
    void swim()
    {
        System.out.println("Fishes can swim");
    }
}
class Bird extends Animal
{
    void fly()
    {
        System.out.println("Birds can fly");
    }
}