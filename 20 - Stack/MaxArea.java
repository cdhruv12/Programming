import java.util.*;

public class MaxArea {
    public static int maxArea(int arr[]) {
        int maxArea = 0;
        //? next smaller right
        int nsr[] = new int[arr.length];
        //? next smaller left
        int nsl[] = new int[arr.length];
        Stack<Integer> s = new Stack<>();

        //? next smaller right
        for (int i = arr.length - 1; i >= 0; i--) {
            while (!s.isEmpty() && arr[s.peek()] >= arr[i]) {
                s.pop();
            }
            if (s.isEmpty()) {
                nsr[i] = arr.length;
            } else {
                nsr[i] = s.peek();
            }
            s.push(i);
        }

        //? Clear the stack before reusing
        s.clear();

        //? next smaller left
        for (int i = 0; i < arr.length; i++) {
            while (!s.isEmpty() && arr[s.peek()] >= arr[i]) {
                s.pop();
            }
            if (s.isEmpty()) {
                nsl[i] = -1;
            } else {
                nsl[i] = s.peek();
            }
            s.push(i);
        }

        //? Calculate max area
        for (int i = 0; i < arr.length; i++) {
            int ht = arr[i];
            int wid = nsr[i] - nsl[i] - 1;
            int currArea = ht * wid;
            maxArea = Math.max(currArea, maxArea);
        }

        return maxArea;
    }

    public static void main(String args[]) {
        //? height of histogram
        int arr[] = {2, 1, 5, 6, 2, 3};
        System.out.println("Max area in histogram = " + maxArea(arr));
    }
}
