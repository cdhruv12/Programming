//? SubArrays 
public class subarrays 
{
    public static void sub(int numbers[])
    {
        int totalpairs=0;
        for(int i=0;i<numbers.length;i++)
        {
            int start=i;
            for(int j=i;j<numbers.length;j++)
            {
                int end=j;
                for(int k=start;k<=end;k++)
                {
                    System.out.print(numbers[k]+" ");
                }
                totalpairs++;
                System.out.println();
            }
            System.out.println();
        }
        System.out.println("Total sub arrays : "+totalpairs);
    }
    public static void main(String[] args)
    {
        int numbers[]={1,2,3,4,5};
        sub(numbers);
    }
}
