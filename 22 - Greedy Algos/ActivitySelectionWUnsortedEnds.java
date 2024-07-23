import java.util.*;

public class ActivitySelectionWUnsortedEnds {
    public static void main(String args[]) {
        int start[] = {1, 3, 0, 5, 8, 5};
        int end[] = {2, 4, 6, 7, 9, 9};

        // Creating a 2D array to hold activity indices, start times, and end times
        int activities[][] = new int[start.length][3];
        for (int i = 0; i < start.length; i++) {
            activities[i][0] = i;       // Activity index
            activities[i][1] = start[i]; // Start time
            activities[i][2] = end[i];   // End time
        }

        // Sorting activities based on end times using a lambda function
        Arrays.sort(activities, Comparator.comparingInt(o -> o[2]));

        int maxAct = 0;
        ArrayList<Integer> ans = new ArrayList<>();

        // Select the first activity
        maxAct = 1;
        ans.add(activities[0][0]);
        int lastEnd = activities[0][2];

        // Iterating over remaining activities
        for (int i = 1; i < end.length; i++) {
            if (activities[i][1] >= lastEnd) {
                // If the start time of the current activity is greater than or equal to the end time of the last selected activity
                maxAct++;
                ans.add(activities[i][0]);
                lastEnd = activities[i][2];
            }
        }

        // Printing the results
        System.out.println("Max. Activity : " + maxAct);
        for (int i = 0; i < ans.size(); i++) {
            System.out.print("A" + ans.get(i) + " ");
        }
        System.out.println();
    }
}
