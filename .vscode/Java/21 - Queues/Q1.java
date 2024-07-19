import java.util.*;
public class Q1 
{
    static void generatePrintBinary(int n)
    {
        Queue<String>q=new LinkedList<>();
        q.add("1");
        while(n-- >0)
        {
            //?remove and retrive from front
            String s1=q.peek();
            q.remove();
            //? current binary
            System.out.println(s1);
            //? generate next binary
            String s2=s1;
            q.add(s1+"0");
            q.add(s2+"1");
        }
    }
    public  static void main(String args[])
    {
        int n=10;
        generatePrintBinary(n);
    }
}