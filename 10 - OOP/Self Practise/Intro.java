public class Intro
{
    public static void main(String[] args)
    {
        Pen p1=new Pen();
        p1.setColor("Blue");
        p1.setTip(3);
        System.out.println("Pen Color : "+ p1.color);
        System.out.println("Pen Tip : "+ p1.tip);
        p1.color="Red";
        p1.tip=5;
        System.out.println("Pen Color : "+ p1.color);
        System.out.println("Pen Tip : "+ p1.tip);
    }
}
class Pen
{
    int tip;
    String color;

    void setColor(String newColor)
    {
        color=newColor;
    }
    void setTip(int newTip)
    {
        tip=newTip;
    }
}
