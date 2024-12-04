import java.util.Scanner;

public class B_Following_Directions {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            int x = 0, y = 0;
            boolean has_passed = false;
            int len = scan.nextInt();
            scan.nextLine(); // Consume the newline left-over

            String str = scan.nextLine();
            for (int j = 0; j < len; j++) {
                char c = str.charAt(j);
                if (c == 'U') {
                    y++;
                } else if (c == 'D') {
                    y--;
                } else if (c == 'L') {
                    x--;
                } else if (c == 'R') {
                    x++;
                }
                //
                if (x == 1 && y == 1) {
                    has_passed = true;
                }
            }
            if (has_passed) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
} // done