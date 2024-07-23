//? INput output Update
import java.util.*;
public class I_O_update 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int marks[]=new int[50];
        System.out.println("Lenght of array : "+marks.length);
        System.out.println("Enter Maths marks : ");
        marks[0]=sc.nextInt();
        System.out.println("Enter Phy marks : ");
        marks[1]=sc.nextInt();
        System.out.println("Enter Chem marks : ");
        marks[3]=sc.nextInt();
        System.out.println("Maths marks : "+marks[0]);
        System.out.println("Phy marks : "+marks[1]);
        System.out.println("Chem marks : "+marks[2]);
        int percentage=(marks[0]+marks[1]+marks[3])/3;
        System.out.println("Percentage : "+percentage+"%");
        marks[2]=+1;
        System.out.println("New Chem marks : "+marks[2]);
    }
}
