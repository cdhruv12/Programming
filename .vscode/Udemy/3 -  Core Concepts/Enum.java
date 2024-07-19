import java.util.*;
public class Enum
{
    /* public static final int COREJAVA=1;
        public static final int COLLECTIONS=2;
        public static final int GENERICS=3;
        public static final int JSP=4;
        public static final int MULTITHREADING=5; */

    public enum Learning
    {
        COREJAVA,COLLECTIONS,GENERICS,JSP,MULTITHREADING
    }
    public static void main(String args[])
    {
        Learning learning=Learning.GENERICS;
        switch(learning)
        {
            case COREJAVA -> System.out.println("Core Java");
            case COLLECTIONS -> System.out.println("Collections");
            case GENERICS -> System.out.println("Generics");
            case JSP -> System.out.println("JSP");
            case MULTITHREADING -> System.out.println("Multithreading");
        }
    }
}
