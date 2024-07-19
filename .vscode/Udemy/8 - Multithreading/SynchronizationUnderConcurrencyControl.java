import java.util.*;
public class SynchronizationUnderConcurrencyControl
{
    //? The line `public static int counter=0;` is declaring a public static integer variable named
    //? `counter` and initializing it with a value of 0. This variable is used to keep track of the
    //? total count as the two threads increment it in a concurrent manner in the given Java program.
    public static int counter=0;
    public static void main(String args[]) throws InterruptedException
    {
        new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                for(int i=1;i<=10000;i++)
                {
                    //? The line `SynchronizationUnderConcurrencyControl.counter++;` is incrementing the
                    //? value of the static variable `counter` by 1 in a concurrent manner. This means
                    //? that both threads running in parallel are attempting to increment the `counter`
                    //? variable simultaneously. However, without proper synchronization mechanisms in
                    //? place, this can lead to race conditions where the final value of `counter` may
                    //? not be as expected due to interleaving of the operations by the threads.
                    SynchronizationUnderConcurrencyControl.counter++;
                }
                System.out.println("Loop in Thread 1 over");
            }
        //? `}).start();` is used to start the execution of the thread defined by the Runnable object.
        //? In this context, it starts the execution of the code block defined within the Runnable
        //? interface for each thread. By calling `start()`, the threads are launched and run
        //? concurrently, incrementing the `counter` variable in parallel.
        }).start();
        new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                for(int i=1;i<=10000;i++)
                {
                    SynchronizationUnderConcurrencyControl.counter++;
                }
                System.out.println("Loop in Thread 2 over");
            }
        }).start();
        //? The `Thread.sleep(200);` statement in the given Java program is causing the main thread to
        //? pause its execution for 200 milliseconds. This pause allows the two threads created in the
        //? program to have some time to increment the `counter` variable before the main thread
        //? proceeds to print out the final value of the `counter` variable.
        Thread.sleep(200);
        System.out.println(counter);
    }
}