import java.util.*;
class Code
{
    private String sectionNo;
    private String lectureNo;
    public Code(String sectionNo,String lectureNo)
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
}
public class HashMapQ
{
    public static void main(String args[])
    {
        Map<Code,String>m=new HashMap<>();
        m.put(new Code("S01","L10"),"D");
        m.put(new Code("S01","L10"),"E");
        m.put(new Code("S01","L10"),"F");
        m.put(new Code("S01","L10"),"G");
        System.out.println(m);

        /* for(String key:m.keySet())
        {
            System.out.println("Key : "+key+" Value : "+m.get(key));
        } */
    }
}