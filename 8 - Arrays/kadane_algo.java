//? Max Sub array sum Kadane algo
public class kadane_algo
{
    public static void print(int numbers[])
    {
        int ms=Integer.MIN_VALUE;
        int cs=0;
        for(int i=0;i<numbers.length;i++)
        {
            ms=cs+numbers[i];
            if(cs<0)
            {
                cs=0;
            }
            ms=Math.max(cs, ms);
        }
        System.out.print("Max sum of sub array :"+ms);
    }
    public static void main(String args[])
    {
        int numbers[]={1,2,3,4,5,6,7,8,9};
        print(numbers);
    }
}