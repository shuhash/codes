import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.nextLine().charAt(0);
        if (c == 'y' || c == 'Y') {
            System.out.println("yes");
        } else if (c == 'n' || c == 'N') {
            System.out.println("no");
        } else {
            System.out.println("invalid");
        }
    }

}
