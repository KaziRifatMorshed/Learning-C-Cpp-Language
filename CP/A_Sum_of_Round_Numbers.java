import java.util.ArrayList;
import java.util.Scanner;

public class A_Sum_of_Round_Numbers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            // int count = 0;
            String number = scan.nextLine();
            int len = number.length();
            ArrayList<Integer> arrayListnum = new ArrayList<>();

            for (int j = 0, temp_len = len - 1; j < len; j++, temp_len--) {
                // int first_digit = (int) number.charAt(j);
                int first_digit = Integer.parseInt(number.charAt(j) + "");
                if (first_digit == 0) {
                    continue;
                }
                arrayListnum.add(first_digit * (int) Math.pow(10, temp_len));
                // count++;
            }
            int arrayListnumsize = arrayListnum.size();
            System.out.println(arrayListnumsize);
            for (int j = 0; j < arrayListnumsize; j++) {
                System.out.print(arrayListnum.get(j) + " ");
            }
            System.out.println();
            //
        }
    }
} // done