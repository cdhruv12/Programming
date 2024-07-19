//? Butterfly
public class butterfly
{
    public static void pattern(int n)
    {
        for(int i=1;i<=n;i++)       //? 1st Half
        {
            for(int j=1;j<=i;j++)       //? stars = i
            {
                System.out.print("*");
            }
            for(int j=1;j<=2*(n-i);j++)       //? spaces = 2*(n-i)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)       //? stars = i
            {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n;i>=1;i--)       //? 2nd half (inverted)
        {
            for(int j=1;j<=i;j++)       //? stars = i
            {
                System.out.print("*");
            }
            for(int j=1;j<=2*(n-i);j++)       //? spaces = 2*(n-i)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)       //? stars = i
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String args[])
    {
        pattern(5);
    }
}