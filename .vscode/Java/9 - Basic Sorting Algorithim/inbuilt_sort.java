
//? Insbuilt Sort
import java.util.*;

public class inbuilt_sort {
    public static void print(Integer arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Integer arr[] = { 12, 43, 23, 76, 45, 98 };
        // ? Arrays.sort(arr);
        // ? Arrays.sort(arr,0,3);
        // ?Arrays.sort(arr, Collections.reverseOrder());
        Arrays.sort(arr, 0, 3, Collections.reverseOrder());
        print(arr);
    }
}