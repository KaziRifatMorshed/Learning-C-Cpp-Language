import java.util.Scanner;

public class A_Collecting_Coins {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            long a = scan.nextLong();
            long b = scan.nextLong();
            long c = scan.nextLong();
            long n = scan.nextLong();
            long result = a + b + c + n;
            if (result % 3 == 0 && (result / 3) >= a && (result / 3) >= b && (result / 3) >= c) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}// done