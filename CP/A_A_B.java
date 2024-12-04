import java.util.Scanner;

public class A_A_B {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            String str = scan.nextLine();
            System.out.println(Integer.parseInt(str.charAt(0) + "") + Integer.parseInt(str.charAt(2) + ""));
        }
    }
}