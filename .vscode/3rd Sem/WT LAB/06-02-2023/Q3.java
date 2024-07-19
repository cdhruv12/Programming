public class Q3 
{
    public static void main(String[] args) 
    {
        int first = 0, second = 1;
        System.out.print("Fibonacci series between 1 and 100: ");
        while (first <= 100) 
        {
            System.out.print(first + " ");
            int next = first + second;
            first = second;
            second = next;
        }
        System.out.println();
    }
}
