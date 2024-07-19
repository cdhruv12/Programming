public class Const
{
    public static void main(String[] args)
    {
        Con c1=new Con();
        Con c2=new Con("Dhruv");
        System.out.println(c2.name);
    }
}
class Con
{
    String name;

    Con()
    {
        System.out.println("Default constructor called...");
    }
    Con(String name)
    {
        this.name=name;
        System.out.println("Parameterized constructor called...");
    }
}