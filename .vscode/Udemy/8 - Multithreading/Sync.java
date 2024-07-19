import java.util.*;
class Brackets
{
    //? The `synchronized` keyword in Java is used to ensure that only one thread can access the
    //? synchronized method at a time. In this case, the `generate()` method in the `Brackets` class is
    //? synchronized, meaning that when one thread is executing this method, other threads will be
    //? blocked from executing it until the first thread completes its execution.
    synchronized public void generate()
    {
        for(int i=1;i<=20;i++)
        {
            if(i<=10)
            {
                System.out.print("[");
            }
            else
            {
                System.out.print("]");
            }
            
        }
        System.out.println();
    }
} 
public  class Sync
{
    public static void main(String args[])
    {
        Brackets b=new Brackets();
        b.generate();
        //? The `new Thread(new Runnable())` syntax in Java is creating a new thread that executes the
        //? code defined in the `run()` method of the `Runnable` interface. In this case, two new
        //? threads are being created using anonymous inner classes implementing the `Runnable`
        //? interface. Each thread is responsible for executing the `run()` method, which in turn calls
        //? the `generate()` method of the `Brackets` class. This allows for concurrent execution of the
        //? `generate()` method by multiple threads.
        new Thread(new Runnable()
        {
            //? The `@Override` annotation in Java is used to indicate that a method is being overridden
            //? from a superclass or interface. When a method is annotated with `@Override`, the
            //? compiler will check if the annotated method is actually overriding a method in a
            //? superclass or implementing an abstract method from an interface. If there is no such
            //? method to override, the compiler will generate an error. This annotation helps in
            //? ensuring that the method signature is correct when overriding a method.
            @Override
            public void run()
            {
                for(int i=1;i<5;i++)
                {
                    b.generate();
                }
            }
        //? `}).start();` is used to start the execution of the thread defined by the anonymous inner
        //? class implementing the `Runnable` interface. This syntax creates a new thread and begins
        //? executing the code defined in the `run()` method of the `Runnable` interface within that
        //? thread.
        }).start();
        new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                for(int i=1;i<5;i++)
                {
                    b.generate();
                }
            }
        }).start();
    }
}