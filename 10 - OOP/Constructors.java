public class Constructors
{
    public static void main(String[] args)
    {
        Con c1=new Con();
        Con c2=new Con("Dhruv");
        System.out.println(c2.name);
        Con c3=new Con(123);
        System.out.println(c3.roll);
    }
}
class Con
{
    String name;
    int roll;

    Con()
    {
        System.out.println("Default constructor called...");
        System.out.println("Or Non-parameterized constructor called...");
    }
    Con(String name)
    {
        this.name=name;
        System.out.println("Parameterized constructor called...");
    }
    Con(int roll)
    {
        this.roll=roll;
        System.out.println("Parameterized constructor called...");
    }
}