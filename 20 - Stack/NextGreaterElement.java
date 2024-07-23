import java.util.*;
public class NextGreaterElement
{
    public static void main(String args[])
    {
        int arr[]={6,8,0,1,3};
        Stack<Integer>s=new Stack<>();
        int nexGreater[]=new int[arr.length];
        //? backward loop for next greater
        for(int i=arr.length-1;i>=0;i--)
        {
            //? while 
            while(!s.isEmpty() && arr[s.peek()]<=arr[i])
            {
                s.pop();
            }
            //? if-else
            if(s.isEmpty())
            {
                nexGreater[i]=-1;
            }
            else
            {
                nexGreater[i]=arr[s.peek()];
            }
            //? push in s
            s.push(i);
        }
        for(int i=0;i<nexGreater.length;i++)
        {
            System.out.print(nexGreater[i]+" ");
        }
        System.out.println();
    }
}