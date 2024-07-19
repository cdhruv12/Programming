//? Decimal to Binary 
public class decimal_to_binary
{
    public static void decTobin(int n)
    {
        int pow=0;
        int myNum=n;
        int biNum=0;
        while(n>0)
        {
            int rem=n%2;
            biNum=biNum+(rem*(int)Math.pow(10,pow));
            pow++;
            n=n/2;
        }
        System.out.println("Bianry for  of "+myNum+" = "+biNum);
    }
    public static void main(String args[])
    {
        decTobin(11);
    }
}