import java.util.*;
public class MaxLengthChainOfPairs
{
    public static void main(String args[])
    {
        int pairs[][]={{5,24},{39,60},{5,28},{27,40},{50,90}};
        Arrays.sort(pairs,Comparator.comparingDouble(o -> o[1]));
        int chainLength=1;
        //? last selected pair end
        int chainEnd=pairs[0][1]; //? chain end
        for(int i=0;i<pairs.length;i++)
        {
            if(pairs[i][0]>chainEnd)
            {
                chainLength++;
                chainEnd=pairs[i][1];
            }
        }
        System.out.println("Max. Length of Chain : "+chainLength);
    }
}