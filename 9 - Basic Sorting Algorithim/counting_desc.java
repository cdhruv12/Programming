
//? Counting Sort in Descending Order
import java.util.*;

public class counting_desc {
    public static void sort(int arr[]) {
        int largest = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            largest = Math.max(largest, arr[i]);
        }
        int count[] = new int[largest + 1];
        for (int i = 0; i < arr.length; i++) {
            count[arr[i]]++;
        }
        int j = 0;
        for (int i = count.length; i > 0; i++) {
            while (count[i] > 0) {
                arr[i] = j;
                j++;
                count[i]--;
            }
        }
    }

    public static void print(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String args[]) {
        int arr[] = { 3, 6, 2, 1, 8, 7, 4, 5, 3, 1 };
        sort(arr);
        print(arr);
    }
}
