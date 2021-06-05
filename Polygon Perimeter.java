import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int perimeter = 0, counter = 0;
        int side;
        while (++counter <= N) {
            side = sc.nextInt();
            perimeter += side;
        }
        System.out.print(perimeter);
    }

}
