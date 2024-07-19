import java.util.*;
public class Q2
{
    public static int kthOdd(int range[],int K)
    {
        if(K<=0)
        {
            return 0;
        }
        int L=range[0]; //? start element
        int R=range[1]; //? end element
        if((R & 1)>0)
        {
            int count=(int)Math.ceil((R-L+1)/2.0);
            if(K>count)
            {
                return 0;
            }
            else
            {
                return (R-2*K+2);
            }
        }
        else
        {
            int count=(R-L+1)/2;
            if(K>count)
            {
                return 0;
            }
            else
            {
                return (R-2*K+1);
            }
        }
    }
    public static void main(String args[])
    {
        int p[]={-10,10};
        int k=8;
        System.out.println(kthOdd(p,k));
    }
}