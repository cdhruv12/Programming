import java.util.*;
class Code implements Comparable<Code>
{
    private String sectionNo;
    private String lectureNo;
    public Code(String  sectionNo,String lectureNo)
    {
        this.sectionNo=sectionNo;
        this.lectureNo=lectureNo;
    }
    public String getSectionNo()
    {
        return sectionNo;
    }
    public String getLectureNo()
    {
        return lectureNo;
    }
    @Override
    public String toString()
    {
        return sectionNo+" "+lectureNo;
    }

    /* public int compareTo(Code o)
    {
        return 0;
    } */
    public int compareTo(Code o)
    {
        String code1=sectionNo.concat(lectureNo);
        String code2=o.getSectionNo().concat(o.getLectureNo());
        return code1.compareTo(code2);
    }
}
public class TreeMapQ
{
    public static void main(String args[])
    {
        Map<Code,String>t=new TreeMap<>();
        t.put(new Code("S10","L10"),"A");
        t.put(new Code("S10","L10"),"B");
        t.put(new Code("S10","L10"),"C");
        System.out.println(t);

        /* for(String key:t.keySet())
        {
            System.out.println("Key : "+key+" Value : "+t.get(key));
        } */
    }
}