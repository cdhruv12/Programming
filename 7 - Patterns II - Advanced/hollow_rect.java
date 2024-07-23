//? Hollow Rectangle 
public class hollow_rect
{
    public static void pattern(int totrow,int totcol)
    {
        for(int i=1;i<=totrow;i++)       //?outer rows 
        {
            for(int j=1;j<=totcol;j++)       //?inner columns
            {
                if(i==1 || i==totrow || j==1 || j==totcol)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.print("\n");
        }
    }
    public static void main(String args[])
    {
        pattern(7,5);
    }
}