import java.util.Scanner;

public class A_Chewbaсca_and_Number {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        String result = "";
        int t = input.length();

        for (int i = 0; i < t; i++) {
            if (input.charAt(0) == '9') {
                result.concat(input.charAt(0));
                continue;
            }

        }
    }
}