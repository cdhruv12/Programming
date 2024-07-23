//? Inverted and rotated half pyramid
public class inverted_half_pyramid
{
    public static void pattern(int row)
    {
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=row-1;j++)       //? for spaces
            {
                System.out.print(" ");
            }
            for(int k=1;k<=i;k++)       //? for stars
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String args[])
    {
        pattern(7);
    }
}