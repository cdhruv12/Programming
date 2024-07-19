import java.util.*;
class Address
{
    int houseno;
    String street;
    String city;
    Scanner sc=new Scanner(System.in);
    void getAddress()
    {
        System.out.println("Enter city , hosue no. and street :");
        city=sc.nextLine();
        houseno=sc.nextInt();
        street=sc.nextLine();
    }
    void display()
    {
        System.out.println("House no. :"+houseno);
        System.out.println("Street :"+street);
        System.out.println("City :"+city);
    }
}
class OfficeAddress extends Address
{
    int workspaceno;
    String street;
    String city;
    Scanner sc=new Scanner(System.in);
    void getAddress()
    {
        System.out.println("Enter city , workspace no. and street :");
        city=sc.nextLine();
        workspaceno=sc.nextInt();
        street=sc.nextLine();
    }
    void display()
    {
        System.out.println("Workspace no. :"+workspaceno);
        System.out.println("Street :"+street);
        System.out.println("City :"+city);
    }
}
class HomeAddress extends Address
{
    int homeno;
    String street;
    String city;
    Scanner sc=new Scanner(System.in);
    void getAddress()
    {
        System.out.println("Enter city , home no. and street :");
        city=sc.nextLine();
        homeno=sc.nextInt();
        street=sc.nextLine();
    }
    void display()
    {
        System.out.println("Home no. :"+homeno);
        System.out.println("Street :"+street);
        System.out.println("City :"+city);
    }
}
class SchoolAddress extends Address
{
    int schoolno;
    String street;
    String city;
    Scanner sc=new Scanner(System.in);
    void getAddress()
    {
        System.out.println("Enter city , school no. and street :");
        city=sc.nextLine();
        schoolno=sc.nextInt();
        street=sc.nextLine();
    }
    void display()
    {
        System.out.println("school no. :"+schoolno);
        System.out.println("Street :"+street);
        System.out.println("City :"+city);
    }
}
public class Address1
{
    public static void main(String[] args)
    {
        Address a1=new HomeAddress();
        a1.getAddress();
        a1.display();
        Address a2=new OfficeAddress();
        a2.getAddress();
        a2.display();
        Address a3=new SchoolAddress();
        a3.getAddress();
        a3.display();
    }
}