import java.util.Scanner;

public class A_Love_Story {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            int count = 0;
            String input = scan.nextLine();
            String valid = "codeforces";
            for (int j = 0; j < valid.length(); j++) {
                if (input.charAt(j) != valid.charAt(j)) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }
} // done