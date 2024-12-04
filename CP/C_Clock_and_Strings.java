import java.lang.*;
import java.util.*;

public class C_Clock_and_Strings {
    private int num;
    private char color;

    private C_Clock_and_Strings(int i, char c) {
        this.color = c;
        this.num = i;
    }

    private int getNum() {
        return this.num;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline left-over

        for (int i = 0; i < t; i++) {
            ArrayList<C_Clock_and_Strings> arrayList = new ArrayList<>();
            C_Clock_and_Strings first, second, third, forth;
            String input_string = scan.nextLine();
            Scanner scan_line = new Scanner(input_string);
            first = new C_Clock_and_Strings(scan_line.nextInt(), 'r');
            second = new C_Clock_and_Strings(scan_line.nextInt(), 'r');
            third = new C_Clock_and_Strings(scan_line.nextInt(), 'b');
            forth = new C_Clock_and_Strings(scan_line.nextInt(), 'b');
            arrayList.add(first);
            arrayList.add(second);
            arrayList.add(third);
            arrayList.add(forth);

            Collections.sort(arrayList, Comparator.comparingInt(C_Clock_and_Strings::getNum));

            if ((arrayList.get(1).color == arrayList.get(2).color)
                    || (arrayList.get(0).color == arrayList.get(1).color)) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }
} // done