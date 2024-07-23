public class Copy
{
    public static void main(String[] args) 
    {
        Student s1=new Student();
        s1.name="Dhruv";
        s1.roll=123;
        s1.password="jdciwbcwc";
        s1.marks=12;

        Student s2=new Student(s1);
        s2.password="hdhbcuiwb";
        System.out.println("Marks : "+s2.marks);
    }
}
class Student
{
    String name;
    int roll;
    String password;
    int marks;

    Student()
    {
        System.out.println("Default constructor called...");
    }
    Student(String name,int roll,String password)
    {
        this.name=name;
        this.roll=roll;
        this.password=password;
        this.marks=marks;
    }
    Student(Student s1)
    {
        this.name=s1.name;
        this.roll=s1.roll;
        this.password=s1.password;
        this.marks=s1.marks;
    }
}