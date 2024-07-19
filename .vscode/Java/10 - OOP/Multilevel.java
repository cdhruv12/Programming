public class Multilevel
{
    public static void main(String[] args)
    {
        Dog d1=new Dog();
        d1.color="Brown";
        d1.eat();
        d1.breathe();
        d1.legs=4;
        d1.breed="Pug";
        System.out.println("Dog color : "+d1.color);
        System.out.println("Dog legs : "+d1.legs);
        System.out.println("Dog breed : "+d1.breed);
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
class Mammal extends Animal
{
    int legs;
}
class Dog extends Mammal
{
    String breed;
}