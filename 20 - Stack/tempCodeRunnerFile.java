import java.util.*;
public class Q3
{
    public static String decode(String str)
    {
        Stack<Integer>intStack=new Stack<>();
        Stack<Character>strStack=new Stack<>();
        String temp="",result="";
        for(int i=0;i<str.length();i++)
        {
            int count=0;
            if(Character.isDigit(str.charAt(i)))
            {
                while(Character.isDigit(str.charAt(i)))
                {
                    count=count*10+str.charAt(i)-'0';
                    i++;
                }
                i--;
                intStack.push(count);
            }
            else if(str.charAt(i)==']')
            {
                temp="";
                count=0;
                if(!intStack.isEmpty())
                {
                    count=intStack.peek();
                    intStack.pop();
                }
                while(!strStack.isEmpty() && strStack.peek()!='[')
                {
                    temp=strStack.peek()+temp;
                    strStack.pop();
                }
                if(!strStack.empty() && strStack.peek()=='[')
                {
                    strStack.pop();
                }
                for(int  j=0;j<count;j++)
                {
                    result=result+temp;
                }
                for(int j=0;j<result.length();j++)
                {
                    strStack.push(result.charAt(j));
                    result="";
                }
            }
            else if(str.charAt(i)=='[')
            {
                if(Character.isDigit(str.charAt(i-1)))
                {
                    strStack.push(str.charAt(i));
                }
                else
                {
                    strStack.push(str.charAt(i));
                    intStack.push(1);
                }
            }
            else
            {
                strStack.push(str.charAt(i));
            }
        }
        while(!strStack.isEmpty())
        {
            result=strStack.peek()+result;
            strStack.pop();
        }
        return result;
    }
    public static void main(String args[])
    {
        String str="3[b2[ca]]";
        System.out.println(decode(str));
    }
}