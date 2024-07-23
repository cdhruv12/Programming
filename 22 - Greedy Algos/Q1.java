import java.util.*;
public class Q1
{
    static int balancedPartition(String str,int n)
    {
        if(n==0)
        {
            return 0;
        }
        //? r->R , l->L , for R=L->ans
        int r=0,l=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(str.charAt(i)=='R')
            {
                r++;
            }
            else if(str.charAt(i)=='L')
            {
                l++;
            }
            if(r==l)
            {
                ans++;
            }
        }
        return ans;
    }
    public static void main(String args[])
    {
        String str="LRRRRLLRLLRL";
        int n=str.length();
        System.out.println(balancedPartition(str,n));
    }
}