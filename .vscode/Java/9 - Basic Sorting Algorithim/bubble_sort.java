//? Bubble Sort
public class bubble_sort {
    public static void bubblesort(int arr[]) {
        for (int turn = 0; turn < arr.length; turn++) {
            for (int i = 0; i < arr.length - 1 - turn; i++) {
                if (arr[i] > arr[i + 1]) {
                    // ?swap
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }

    public static void printarr(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int arr[] = { 3, 6, 1, 8, 8, 2, 5, 7 };
        bubblesort(arr);
        printarr(arr);
    }
}
