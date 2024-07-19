import java.util.*;
class Code implements Comparable<Code>
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
    public int compareTo(Code o)
    {
        String code1=sectionNo.concat(lectureNo);
        String code2=o.getSectionNo().concat(o.getLectureNo());
        return code1.compareTo(code2);
    }
    public boolean equals(Object o)
    {
        if(this==o)
        {
            return true;
        }
        if(o==null || getClass()!=o.getClass())
        {
            return false;
        }
        Code c=(Code)o;
        return Objects.equals(sectionNo,c.sectionNo) && Objects.equals(lectureNo,c.lectureNo);
    }
    public int hashCode()
    {
        return Objects.hash(sectionNo,lectureNo);
    }
}
public class EqualNHashcodeMethod
{
    public static void main(String args[])
    {
        String x1="Dhruv";
        x1+="Chauhan";
        System.out.println(x1);
        String x2="DhruvChauhan";
        System.out.println(x2);
        System.out.println(x2=="DhruvChauhan");
        System.out.println(x1=="DhruvChauhan");
        System.out.println(x1==x2);
        System.out.println(x1.equals(x2));
        System.out.println(x1.hashCode());
        System.out.println(x2.hashCode());
        Code c1=new Code("01","01");
        Code c2=new Code("01","01");
        System.out.println(c1==c2);
        System.out.println(c1.hashCode());
        System.out.println(c2.hashCode());
        System.out.println(c1.equals(c2));  
    }
}