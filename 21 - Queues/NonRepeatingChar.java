import java.util.*;
public class NonRepeatingChar
{
    public static void nonRepeatingChar(String str)
    {
        //? freq : 'a'-'z'
        int freq[]=new int[26];
        Queue<Character>q=new LinkedList<>();
        for(int i=0;i<str.length();i++)
        {
            char ch=str.charAt(i);
            q.add(ch);
            freq[ch-'a']++;
            while(!q.isEmpty() && freq[q.peek()-'a']>1)
            {
                q.remove();
            }
            if(q.isEmpty())
            {
                System.out.print(-1+" ");
            }
            else
            {
                System.out.print(q.peek()+" ");
            }
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        String str="aabccxb";
        nonRepeatingChar(str);
    }
}