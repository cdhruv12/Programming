//? SOlid rhombus
public class solid_rhombus
{
    public static void pattern(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)   //? spaces
            {
                System.out.print(" ");
            }
            for(int j=1;j<=n;j++)   //? stars
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