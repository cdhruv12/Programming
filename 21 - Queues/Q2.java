import java.util.*;
public class Q2
{
    static int minCost(int arr[],int n)
    {
        //? smallest elemnt given highest priority
        PriorityQueue<Integer>pq=new PriorityQueue<>();
        //? add to priority queue
        for(int i=0;i<n;i++)
        {
            pq.add(arr[i]);
        }
        //? stores total cost
        int res=0;
        //? combine ropes
        while(pq.size()>1)
        {
            int first=pq.poll();
            int second=pq.poll();
            res+=first+second;
            pq.add(first+second);
        }
        return res;
    }
    public static void main(String args[])
    {
        int len[]={4,3,2,6};
        int size=len.length;
        System.out.println("Total cost for connecting ropes is "+minCost(len,size));
    }
}