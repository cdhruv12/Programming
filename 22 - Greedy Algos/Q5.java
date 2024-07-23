import java.util.*;
public class Q5
{
    public static int ans=10000000;
    public static void solve(int a[],int n,int k,int index,int sum,int maxSum)
    {
        if(k==1)
        {
            maxSum=Math.max(maxSum,sum);
            sum=0;
            for(int i=index;i<n;i++)
            {
                sum=sum+a[i];

            }
            maxSum=Math.max(maxSum,sum);
            ans=Math.min(ans,maxSum);
            return;
        }
        sum=0;
        for(int i=index;i<n;i++)
        {
            sum=sum+a[i];
            maxSum=Math.max(maxSum,sum);
            solve(a,n,k-1,i+1,sum,maxSum);
        }
    }
    public static void main(String args[])
    {
        int arr[]={1,2,3,4};
        int k=3; //? K divisions
        int n=4; //? size of Arrays
        solve(arr,n,k,0,0,0);
        System.out.println(ans);
    }
}