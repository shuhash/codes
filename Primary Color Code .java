import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.next().charAt(0);
        if (c == 'r' || c == 'R') {
            System.out.println("RED");
        } else if (c == 'g' || c == 'G') {
            System.out.println("GREEN");
        } else if (c == 'b' || c == 'B') {
            System.out.println("BLUE");
        } else {
            System.out.println("UNDEFINED");
        }
    }
}
