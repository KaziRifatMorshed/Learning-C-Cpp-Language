import java.lang.*;
import java.util.*;

public class D_Binary_Cut {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            String input_string = scan.nextLine();
            int count = 0;

            // StringTokenizer st = new StringTokenizer(input_string,
            // "(?<!^)(?=1)|(?<=0)(?!$)");
            // while (st.hasMoreTokens()) {
            // count++;
            // }
            // count = st.countTokens();

            String[] segments = input_string.split("(?<=0)(?=1)|(?<=1)(?=0)");
            count = segments.length;

            if (count > 3) {
                count--;
            }
            System.out.println(count);

        }
    }
}