import java.util.*;
public class Chocola
{
    public static void main(String args[])
    {
        int n=4,m=6;
        Integer costVer[]={2,1,3,1,4}; //? m-1
        Integer costHor[]={4,1,2}; //? n-1
        Arrays.sort(costVer,Collections.reverseOrder());
        Arrays.sort(costHor,Collections.reverseOrder());
        int h=0,v=0;
        int hp=1,vp=1; //? horz and vert pieces
        int cost=0; //? min cost
        while(h<costHor.length && v<costVer.length)
        {
            if(costVer[v]<=costHor[h]) //? horizontal cut
            {
                cost=cost+(costHor[h]*vp);
                hp++;
                h++;
            }
            else //? vertical cut
            {
                cost=cost+(costVer[v]*hp);
                vp++;
                v++;
            }
        }
        //? Remaining horz. cuts
        while(h<costHor.length)
        {
            cost=cost+(costHor[h]*vp);
            hp++;
            h++;
        }
        //? Remaining vert. cuts
        while(v<costVer.length)
        {
            cost=cost+(costVer[v]*hp);
            vp++;
            v++;
        }
        System.out.println("Min. cost of cutting pieces is : "+cost);
    }
}