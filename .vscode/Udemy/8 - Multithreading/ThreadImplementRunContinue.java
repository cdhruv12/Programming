import java.util.*;
//? package. This allows you to use the `Random` class in your code to generate random numbers.
//? The statement `import java.util.Random;` is importing the `Random` class from the `java.util`
import java.util.Random;
//? The statement `import static java.lang.Thread.sleep;` is importing the static method `sleep` from
//? the `Thread` class in the `java.lang` package. This allows you to directly call the `sleep` method
//? without specifying the class name `Thread.sleep()` in your code.
import static java.lang.Thread.sleep;
public class ThreadImplementRunContinue
{
    //? The `public static void main(String args[]) throws InterruptedException` is the main method
    //? signature in Java. Here's what each part means:
    public static void main(String args[]) throws InterruptedException
    {
        
        //? The `new Thread(new Runnable()` is creating a new thread in Java by passing an anonymous
        //? implementation of the `Runnable` interface to the `Thread` constructor. This allows you to
        //? define the code that the thread will execute by implementing the `run()` method of the
        //? `Runnable` interface within the anonymous class.
        new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                for(int i=0;i<10;i++)
                {
                    try
                    {
                        Random random=new Random();
                        sleep(random.nextInt(1000));
                    }
                    catch(InterruptedException e)
                    {
                        e.printStackTrace();
                    }
                    System.out.println(i);
                }
            }
        }).start();
    }
}