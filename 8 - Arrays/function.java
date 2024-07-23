//? Function in array
public class function 
{
    public static void update(int marks[],int non_changeable)
    {
        non_changeable=5;
        for(int i=0;i<=marks.length;i++)
        {
            marks[i]=marks[i]+1;
        }
    }
    public static void main(String args[])
    {
        int marks[]={12,23,34};
        int non_changeable=45;
        update(marks,non_changeable);
        System.out.println(non_changeable);
        for(int i=0;i<=marks.length;i++)
        {
            System.out.println(marks[i]+" ");
        }
        System.out.println();
    }
}
