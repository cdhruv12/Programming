import java.util.*;
public class JobSeq
{
    static class Job
    {
        int deadline;
        int profit;
        int id; //? 0-A, 1-B, 2-C, 3-D, etc
        public Job(int d,int p,int i)
        {
            deadline=d;
            profit=p;
            id=i;
        }
    }
    public static void main(String args[])
    {
        int jobInfo[][]={{4,20},{1,10},{1,40},{1,30}};
        ArrayList<Job>jobs=new ArrayList<>();
        for(int i=0;i<jobInfo.length;i++)
        {
            jobs.add(new Job(jobInfo[i][0],jobInfo[i][1],i));
        }
        //? descending oder of profit
        Collections.sort(jobs,(obj1,obj2) -> obj2.profit-obj1.profit);
        ArrayList<Integer>seq=new ArrayList<>();
        int time=0;
        for(int i=0;i<jobs.size();i++)
        {
            Job curr=jobs.get(i);
            if(curr.deadline>time)
            {
                seq.add(curr.id);
                time++;
            }
        }
        //? print seq.
        System.out.println("Max. jobs : "+seq.size());
        System.out.print("Job Seq. : ");
        for(int i=0;i<seq.size();i++)
        {
            System.out.print(seq.get(i)+" ");
        }
        System.out.println();
    }
}