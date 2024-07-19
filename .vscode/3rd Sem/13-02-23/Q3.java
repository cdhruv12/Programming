public class Q3 {
    private static int count;

    public Q3() {
        count++;
    }

    public static void main(String args[]) {
        Q3 ob1 = new Q3();
        Q3 ob2 = new Q3();
        Q3 ob3 = new Q3();
        Q3 ob4 = new Q3();
        Q3 ob5 = new Q3();
        Q3 ob6 = new Q3();
        Q3 ob7 = new Q3();
        Q3 ob8 = new Q3();
        System.out.print("Total Number of Objects: " + Q3.count);
    }
}