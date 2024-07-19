import java.util.*;
public class AutoBoxingnUnBoxing
{
    public static void main(String args[])
    {
        ArrayList<Integer> n=new ArrayList<>();
        n.add(1); //? autoboxing 
        System.out.println(n.get(0)); //? autounboxing
        ArrayList<IntWrapper> m=new ArrayList<>();
        m.add(new IntWrapper(65)); //? boxing 
        System.out.println(m.get(0).getNum()); //? unboxing
    }
}
class IntWrapper
{
    public int num;
    public IntWrapper(int num)
    {
        this.num=num;
    }
    public void setNum(int num)
    {
        this.num=num;
    }
    public int getNum()
    {
        return num;
    }
}