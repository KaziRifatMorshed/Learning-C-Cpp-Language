import java.util.*;

public class A_My_First_Sorting_Problem {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();

        for (int i = 0; i < t; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            if (a > b) {
                System.out.println(b + " " + a);
            } else {
                System.out.println(a + " " + b);
            }
        }
    }

}// done