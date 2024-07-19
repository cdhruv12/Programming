/**
 * The `ThreadImplementRun` class creates two threads that run instances of the `MyCounter` class with
 * different initial values.
 */
import java.util.*;
//? The statement `import static java.lang.Thread.sleep;` is importing the static `sleep` method from
//? the `Thread` class in the `java.lang` package. This allows you to directly use the `sleep` method in
//? your code without specifying the class name `Thread.sleep()` every time you want to call it.
import static java.lang.Thread.sleep;
class MyCounter implements Runnable
{
    private int threadNo;
    public MyCounter(int threadNo)
    {
        this.threadNo=threadNo;
    }
    @Override
    public void run()
    {
        for(int i=0;i<10;i++)
        {
            //? The code snippet `try { Random random=new Random(); sleep(random.nextInt(1000)); }` is
            //? creating a new `Random` object and then making the current thread sleep for a random
            //? amount of time between 0 and 999 milliseconds. This is achieved by calling
            //? `nextInt(1000)` on the `Random` object to generate a random integer between 0 and 999,
            //? and then passing that value to the `sleep` method to pause the thread execution for that
            //? duration. This simulates a delay or pause in the thread's execution for a random amount
            //? of time.
            try
            {
                Random random=new Random();
                sleep(random.nextInt(1000));
            }
            //? The `catch(InterruptedException e)` block is a part of exception handling in Java. In
            //? this specific case, it is catching an `InterruptedException` which is thrown when a
            //? thread is interrupted while it is in a blocked state (such as when it is sleeping).
            catch(InterruptedException e)
            {
                e.printStackTrace();
            }
            System.out.println("Thread no. : "+threadNo+" & Iterations no. : "+i);
        }
    }
}
public class ThreadImplementRun
{
    public static void main(String args[])
    {
       //? `Thread t1=new Thread(new MyCounter(1));` is creating a new `Thread` object named `t1` and
       //? passing an instance of the `MyCounter` class with an initial value of 1 to the `Thread`
       //? constructor. This means that `t1` will execute the `run` method of the `MyCounter` class in a
       //? separate thread when `t1.start()` is called.
        Thread t1=new Thread(new MyCounter(1));
        Thread t2=new Thread(new MyCounter(2));
        //? `t1.start();` is a method call that starts the execution of the thread represented by the
        //? `t1` object. When `t1.start()` is called, the JVM (Java Virtual Machine) will schedule the
        //? thread for execution, and the `run` method of the `MyCounter` class (which `t1` is
        //? associated with) will be executed concurrently in a separate thread.
        t1.start();
        t2.start();
    }
}