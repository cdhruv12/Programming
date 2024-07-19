//? Reverse
public class reverse 
{
    public static void ulta(int numb[])
    {
        int start=0,end=numb.length-1;
        while(start<end)
        {
            int temp=numb[end];
            numb[end]=numb[start];
            numb[start]=temp;
            start++;
            end--;
        }
    }
    public static void main(String args[])
    {
        int numb[]={1,2,3,4,5};
        for(int i=0;i<numb.length;i++)
        {
            System.out.print(numb[i]+" ");
        }
        System.out.println();
        ulta(numb);
        for(int i=0;i<numb.length;i++)
        {
            System.out.print(numb[i]+" ");
        }
    }
}
