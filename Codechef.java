import java.util.*;
import java.io.*;

class Codechef {
    public static void main (String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        
        while (T-- > 0) {
            int N = Integer.parseInt(br.readLine());
            String S = br.readLine();
            
            int flips = 0;
            boolean hasZero = false;
            
            for (char c : S.toCharArray()) {
                if (c == '0') {
                    hasZero = true;
                    break;
                }
            }
            
            if (!hasZero) {
                flips = 1;
            } else {
                int consecutiveOnes = 0;
                for (char c : S.toCharArray()) {
                    if (c == '1') {
                        consecutiveOnes++;
                    } else {
                        flips += consecutiveOnes / 2;
                        consecutiveOnes = 0;
                    }
                }
                flips += consecutiveOnes / 2;
            }
            
            System.out.println(flips);
        }
    }
}