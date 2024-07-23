public class Fun_Overloading
{
    public static void main(String[] args)
    {
        Calculator cal=new Calculator();
        System.out.println("Sum of int: "+cal.sum(1,2));
        System.out.println("Sum of float: "+cal.sum((float)3.4,(float)5.6));
        System.out.println("Sum of double: "+cal.sum(7.8,9.0));
        System.out.println("Sum of 3 int: "+cal.sum(9,8,7));
    }
}
class Calculator
{
    int sum(int a,int b)
    {
        return a+b;
    }
    float sum(float a,float b)
    {
        return a+b;
    }
    Double sum(Double a,Double b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)

    {
        return a+b+c;
    }
}