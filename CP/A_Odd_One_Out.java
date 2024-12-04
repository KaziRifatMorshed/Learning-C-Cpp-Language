import java.util.Scanner;

public class A_Odd_One_Out {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int c = scan.nextInt();
            int result;
            if (a - b == 0) {
                result = c;
            } else if (b - c == 0) {
                result = a;
            } else {
                result = b;
            }
            System.out.println(result);
        }
    }
} // done