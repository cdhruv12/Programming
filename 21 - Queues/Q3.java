import java.util.*;
public class Q3
{
        static class Job
        {
            char job_id;
            int deadline;
            int profit;
            Job(char job_id,int deadline,int profit)
            {
                this.job_id=job_id;
                this.deadline=deadline;
                this.profit=profit;
            }
        }
        //? job seq that max the total profit
        static void printJobScheduling(ArrayList<Job>arr)
        {
            //? sort by deadline in ascending order
            int n=arr.size();
            Collections.sort(arr,(a,b)->{
                return a.deadline-b.deadline;
            });
            //? result->stores jobs that are selected
            ArrayList<Job>result=new ArrayList<>();
            //? maxheap->store job based on profit in descending
            PriorityQueue<Job>maxHeap=new PriorityQueue<>((a,b)->{
                return b.profit-a.profit;
            });
            //? reverse order
            for(int i=n-1;i>-1;i--)
            {
                int slot_available;
                if(i==0)
                {
                    slot_available=arr.get(i).deadline;
                }
                else
                {
                    slot_available=arr.get(i).deadline-arr.get(i-1).deadline;
                }
                maxHeap.add(arr.get(i));
                while(slot_available>0 && maxHeap.size()>0)
                {
                    Job job=maxHeap.remove();
                    slot_available--;
                    result.add(job);
                }
            }
            Collections.sort(result,(a,b)->{
                return a.deadline-b.deadline;
            });
            for(Job job:result)
            {
                System.out.print(job.job_id+" ");
            }
            System.out.println();
        }
        public static void main(String args[])
        {
            ArrayList<Job>arr=new ArrayList<Job>();
            arr.add(new Job('a',2,100));
            arr.add(new Job('b',1,19));
            arr.add(new Job('c',2,27));
            arr.add(new Job('d',1,25));
            arr.add(new Job('e',3,15));
            System.out.println("Following is max. profit seq. of jobs");
            printJobScheduling(arr);
        }
    }
