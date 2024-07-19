public class Q4_b
{
    public static void main(String[] args) 
    {
      int rows = 4;
  
      for (int i = rows; i >= 1; i--) 
      {
        for (int j = 1; j <= i; j++) 
        {
          System.out.print(j);
        }
        for (int j = i; j < rows; j++) 
        {
          System.out.print("**");
        }
        for (int j = rows; j >= i; j--) 
        {
          System.out.print(j);
        }
        System.out.println();
      }
    }
  } 
    

