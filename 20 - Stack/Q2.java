import java.util.*;

public class Q2 {
    public static String simplify(String A) {
        Stack<String> st = new Stack<>();
        StringBuilder res = new StringBuilder("/");
        int len_A = A.length();

        for (int i = 0; i < len_A; i++) {
            String dir = "";
            while (i < len_A && A.charAt(i) == '/') {
                i++;
            }
            while (i < len_A && A.charAt(i) != '/') {
                dir += A.charAt(i);
                i++;
            }
            if (dir.equals("..")) {
                if (!st.isEmpty()) {
                    st.pop();
                }
            } else if (!dir.equals(".") && dir.length() != 0) {
                st.push(dir);
            }
        }

        Stack<String> st1 = new Stack<>();
        while (!st.isEmpty()) {
            st1.push(st.pop());
        }

        while (!st1.isEmpty()) {
            if (st1.size() != 1) {
                res.append(st1.pop()).append("/");
            } else {
                res.append(st1.pop());
            }
        }

        return res.toString();
    }

    public static void main(String[] args) {
        String str = new String("/a/./b/../../c/");
        String res = simplify(str);
        System.out.println(res);
    }
}
