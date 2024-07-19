import java.util.*;
public class FinalKeyword
{
    public static void main(String args[])
    {
        Child c=new Child();    
        System.out.println(c.x);
        //? c.setX(20);
        Child c1=new Child(12);
        System.out.println(c1.getX());
    }
}
class Child
{
    public final int x;
    public Child()
    {
        this.x=10;
    }
    public Child(int x)
    {
        this.x=x;
    }
    public int getX()
    {
        return x;
    }
    /*public void setX(int x)
    {
        this.x=x;
    }*/
}