//? Sum of Sub Array - Brute Force
public class Brute_Force
{
    public static void print(int numbers[])
    {
        int currsum=0;
        int maxsum=Integer.MIN_VALUE;
        for(int i=0;i<numbers.length;i++)
        {
            int start=i;
            for(int j=1;j<numbers.length;j++)
            {
                int end=j;
                for(int k=start;k<=end;k++)
                {
                    currsum+=numbers[k];
                }
                System.out.println(currsum);
                if(maxsum<currsum)
                {
                    maxsum=currsum;

                }
            }
            System.out.println("--------------");
        }
        System.out.println("max sum = "+maxsum);
    }
    public static void main(String args[])
    {
        int numbers[]={1,2,3,4,5};
        print(numbers);
    }
}