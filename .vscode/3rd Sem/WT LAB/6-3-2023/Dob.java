import java.util.*;
class Date {
    private int day;
    private int month;
    private int year;

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public int daysSinceJan10() {
        int[] daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int daysSinceJan1 = 0;
        
        // Add days of completed months
        for (int i = 0; i < month - 1; i++) {
            daysSinceJan1 += daysInMonth[i];
        }
        
        // Add days of current month
        daysSinceJan1 += day - 1;
        
        // Add leap day for leap years
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2) {
            daysSinceJan1++;
        }
        
        return daysSinceJan1;
    }
}
public class Dob {
    public static void main(String[] args) {
        Date myDate = new Date(11, 8, 2023);
        int daysSinceJan1 = myDate.daysSinceJan10() + 1;
        System.out.println("Days since January 1: " + daysSinceJan1);
    }
}