import java.util.*;
import java.io.FileNotFoundException;
import java.io.FileReader;
public class Throw
{
    public static void main(String args[])
    {
        Throw t=new Throw();
        try
        {
            t.doSomething();
        }
        catch(FileNotFoundException e)
        {
            e.printStackTrace();

        }
    }
    public void doSomething() throws FileNotFoundException
    {
        FileReader in=new FileReader("txt.txt");
        System.out.println("Do Something");
    }
}