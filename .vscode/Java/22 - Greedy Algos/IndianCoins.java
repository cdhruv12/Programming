import java.util.*;
public class IndianCoins
{
    public static void main(String args[])
    {
        Integer coins[]={1,2,5,10,20,50,100,500,2000};
        int coinsCount=0;
        int amount=190;
        Arrays.sort(coins,Comparator.reverseOrder());
        ArrayList<Integer>ans=new ArrayList<>();
        for(int i=0;i<coins.length;i++)
        {
            if(coins[i]<=amount)
            {
                while(coins[i]<=amount)
                {
                    coinsCount++;
                    ans.add(coins[i]);
                    amount=amount-coins[i];
                }
            }
        }
        System.out.println("Max. no. of coins used : "+coinsCount);
        System.out.print("The coins : ");
        for(int i=0;i<ans.size();i++)
        {
            System.out.print(ans.get(i)+" ");
        }
        System.out.println();
    }
}