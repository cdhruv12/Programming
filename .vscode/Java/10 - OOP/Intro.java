//? Intro to OOP 
import java.util.*;
public class Intro
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        Pen p1=new Pen();
        p1.setColor("Red");
        System.out.println("Color : "+p1.color);
        p1.setQty(1);
        System.out.println("Qty : "+p1.qty);
    }
}
class Pen
{
    String color;
    int qty;
    void setColor(String newColor)
    {
        color=newColor;
    }
    void setQty(int newQty)
    {
        qty=newQty;
    }
}
class Student
{
    String name;
    float avg;
    void setcal(int mat,int cs,int phy)
    {
        avg=(mat+cs+phy)/3;
    }
}