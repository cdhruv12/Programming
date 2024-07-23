import java.util.*;
public class FractionalKnapsack
{
    public static void main(String args[])
    {
        int val[]={60,100,120};
        int wt[]={10,20,30};
        int capacity=50;
        //? sorting
        //? Array to store ratios and their indices
        double ratio[][]=new double[val.length][2];
        //? 0th -> idx , 1st col -> ratio
        //? filling ratio array 
        for(int i=0;i<val.length;i++)
        {
            ratio[i][0]=i;
            ratio[i][1]=val[i]/(double)wt[i];
        }
        //? ascending order
        Arrays.sort(ratio,Comparator.comparingDouble(o -> o[1]));
        int finalValue=0;
        for(int i=ratio.length-1;i>=0;i--)
        {
            int idx=(int)ratio[i][0];
            //? include full item
            if(capacity>=wt[idx])
            {
                finalValue=finalValue+val[idx];
                capacity=capacity-wt[idx];
            }
            else
            {
                //? include  fractional part
                finalValue+=(ratio[i][1]*capacity);
                capacity=0;
                break;
            }
        }
        System.out.println("Final value : "+finalValue);
    }
}