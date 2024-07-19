//? Function Arguments
public class function_argument
{
    public static void update(int marks[],int non_changeable)
    {
        non_changeable=10;
        for(int i=0;i<marks.length;i++)
        {
            marks[i]=marks[i]+1;
        }
    }
    public static void main(String args[])
    {
        int non_changeable=5;
        int marks[]={12,23,34};
        update(marks,non_changeable);
        System.out.println(non_changeable);
        for(int i=0;i<marks.length;i++)
        {
            System.out.print(marks[i]+" ");
        }
        System.out.println();
    }
}