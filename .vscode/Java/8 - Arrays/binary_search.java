//? Binary Search
public class binary_search
{
    public static int search(int num[],int key)
    {
        int start=0;
        int end=num.length-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(num[mid]==key)
            {
                return mid;
            }
            else if(num[mid]<key)
            {
                start=mid+1;
            }
            else if(num[mid]>key)
            {
                end=mid-1;
            }
        }
        return -1;
    }
    public static void main(String args[])
    {
        int num[]={12,23,34,45,56,67,78,89};
        int key=23;
        System.out.println("Index for key is "+search(num,key));
    }
}