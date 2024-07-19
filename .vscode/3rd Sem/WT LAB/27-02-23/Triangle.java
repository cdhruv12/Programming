import java.util.*;
class Shape
{
    int height;
    int breadth;
    Scanner sc=new Scanner(System.in);
    void getData()
    {
        System.out.println("Enter height and breadth :");
        height = sc.nextInt();
        breadth = sc.nextInt();
    }
    void putData()
    {
        System.out.println("Height : " + height + " breadth : " + breadth);
    }
}
class Rectangle extends Shape
{
    void perimterRectangle()
    {
        System.out.println("Perimeter of Rectangle : " + (2*(breadth+height)));
    }
    void areaRectangle()
    {
        System.out.println("Area of Rectangle : " + breadth*height);
    }
}
class Triangle extends Shape
{
    void perimterTriangle()
    {
        System.out.println("Perimeter of Triangle : " +(3*height));
    }
    void areaTriangle()
    {
        System.out.println("Area of Triangle : " +(1/2)*height*breadth);
    }
    public static void main(String[] args)
    {
        Rectangle R1=new Rectangle();
        R1.getData();
        R1.putData();
        R1.areaRectangle();
        R1.perimterRectangle();
        Triangle T1=new Triangle();
        T1.getData();
        T1.putData();
        T1.areaTriangle();
        T1.perimterTriangle();
    }
}
