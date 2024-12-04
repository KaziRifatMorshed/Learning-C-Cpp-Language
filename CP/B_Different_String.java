import java.lang.*;
import java.util.*;

public class B_Different_String {
    private static String yes = "YES";
    private static String no = "NO";

    public static void main(String[] args) {
        Scanner scann = new Scanner(System.in);
        int t = scann.nextInt();
        scann.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            String inputted_string = scann.nextLine();
            int distinct_count = (int) inputted_string.chars().distinct().count();

            if (inputted_string.length() == 1 || distinct_count == 1) {
                System.out.println(no);
                continue;
            }
            System.out.println(
                    yes + "\n" + inputted_string.substring(1, inputted_string.length()) + inputted_string.charAt(0));
        }
        scann.close();
    }
} // done