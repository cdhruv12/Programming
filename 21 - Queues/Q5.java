import java.util.*;
public class Q5
{
    static void printMax(int arr[],int n,int k)
    {
        Deque<Integer>d=new LinkedList<>();
        //? process the first k element
        for(int i=0;i<k;++i)
        {
            while(!d.isEmpty() && arr[i]>=arr[d.peekLast()])
            {
                d.removeLast();
            }
            d.addLast(i);
        }
        //? process rest elements
        for(int i=0;i<n;++i)
        {
            System.out.println(arr[d.peek()]+" ");
            //? remove elements outside curr window
            while((!d.isEmpty()) && d.peek()<=i-k)
            {
                d.removeFirst();
            }
            //? remove elements that are smaller than curr element 
            while((!d.isEmpty() && arr[i]>=arr[d.peekLast()]))
            {
                d.removeLast();
            }
            d.addLast(i);
        }
        //? max of last window
        System.out.println(arr[d.peek()]);
    }
    public static void main(String args[])
    {
        int arr[]={12,1,78,90,57,89,56};
        int k=3;
        printMax(arr,arr.length,k);
    }
}