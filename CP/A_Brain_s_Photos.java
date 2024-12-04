import java.util.Scanner;

public class A_Brain_s_Photos {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t1 = scan.nextInt();
        int t2 = scan.nextInt();
        boolean is_color = false;
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t1; i++) {
            String line = scan.nextLine();
            int len = line.length();
            for (int j = 0; j < len; j += 2) {
                if (line.charAt(j) != 'B' && line.charAt(j) != 'W' && line.charAt(j) != 'G') {
                    is_color = true;
                }
            }
        }
        if (is_color) {
            System.out.println("#Color");
        } else {
            System.out.println("#Black&White");
        }
    }
} // done