import java.util.Scanner;

public class A_Minimal_Square {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int result = Math.min(Math.max(a, 2 * b), Math.max(2 * a, b));
            System.out.println(result * result);
        }
    }
}