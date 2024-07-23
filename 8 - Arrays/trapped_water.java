//? Trapped rain water problem
public class trapped_water 
{
    public static int trappedwater(int height[])    
    {
        int n=height.length;

        //? Left Max Boundary
        int leftMax[]=new int[n];
        leftMax[0]=height[0];
        for(int i=1;i<n;i++)
        {
            leftMax[i]=Math.max(height[i],leftMax[i-1]);
        }
        
        //? Right Max Boundary
        int rigthMax[]=new int[n];
        rigthMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rigthMax[i]=Math.max(height[i], rigthMax[i+1]);
        }

        //? Loop
        int trappedwater=0;
        for(int i=0;i<n;i++)
        {
            //? water level
            int waterlevel=Math.min(leftMax[i],rigthMax[i]);

            //? trapped water
            trappedwater+=waterlevel-height[i];
        }
        return trappedwater;
    }
    public static void main(String[] args)
    {
        int height[]={1,2,3,4,5};
        System.out.println("Amount of trapped water is "+trappedwater(height));
    }
}
