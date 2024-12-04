import java.util.Scanner;

public class A_Keyboard {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String keyboard = "qwertyuiop asdfghjkl; zxcvbnm,./";
        String instruction = scan.nextLine();
        String input_str = scan.nextLine();
        String result = "";
        int coefficient = 0;
        if (instruction.equals("R")) {
            coefficient = -1;
        } else {
            coefficient = 1;
        }
        for (int i = 0; i < input_str.length(); i++) {
            char c = input_str.charAt(i);
            for (int j = 0; j < keyboard.length(); j++) {
                if (keyboard.charAt(j) == c) {
                    result += keyboard.charAt(j + coefficient);
                }
            }
        }
        System.out.println(result);
    }
} // done