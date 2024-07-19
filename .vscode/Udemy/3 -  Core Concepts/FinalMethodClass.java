import java.util.*;
public class FinalMethodClass
{
    public static void main(String args[])
    {
        Child c=new Child();
        c.india();
        c.usa();
    }
}
class Parent
{
    public final void india()
    {
        System.out.println("India is great");
    }
    public void usa()
    {
        System.out.println("Usa is OK");
    }
}
class Child extends Parent
{
    public void india2()
    {
        System.out.println("India is diverse");
    }
}