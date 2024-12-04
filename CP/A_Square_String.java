import java.util.Scanner;

public class A_Square_String {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            String str = scan.nextLine();
            int len = str.length();
            if (len % 2 != 0) { // odd length
                System.out.println("NO");
                continue;
            }

            // if (len == 2 && str.charAt(0) == str.charAt(1)) {
            // System.out.println("YES");
            // continue;
            // }
            // if (len == 2 && str.charAt(0) != str.charAt(1)) {
            // System.out.println("NO");
            // continue;
            // }

            int halflen = len / 2;
            if (str.substring(0, halflen).equals(str.substring(halflen, len))) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
} // done