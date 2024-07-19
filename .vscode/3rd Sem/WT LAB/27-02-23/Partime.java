import java.util.*;
class Employee
{
    String name;
    int id;
    Double salary;
    Scanner sc=new Scanner(System.in);
    void getData()
    {
        System.out.println("Enter name,id and salary :");
        name=sc.next();
        id=sc.nextInt();
        salary=sc.nextDouble();
    }
    void display()
    {
        System.out.println("Name : " + name+" ID : " +id+" Salary : " + salary);
    }
}
class Regular extends Employee
{
    int DA;
    int HRA;
    void calculate()
    {
        System.out.println("Enter DA,HRA,basic salary : ");
        DA=sc.nextInt();
        HRA=sc.nextInt();
        double sal=salary+(salary*DA/100);
        System.out.println("Salary of regular employee : "+sal);
    }
}
class Partime extends Employee
{
    int hour;
    int payPerhour;
    void calculate()
    {
        System.out.println("Enter pay and payPerhour : ");
        hour=sc.nextInt();
        payPerhour=sc.nextInt();
        int pat=hour*payPerhour;
        System.out.println("Salary of partime employee : "+pat);
    }
    public static void main(String[] args)
    {
        Regular r1=new Regular();
        r1.getData();
        r1.display();
        r1.calculate();
        Partime p1=new Partime();
        p1.getData();
        p1.display();
        p1.calculate();
    }
}