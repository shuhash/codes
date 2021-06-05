import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        int Z = sc.nextInt();
        int smallest = X;
        if (Y < smallest) {
            smallest = Y;
        }

        if (Z < smallest) {
            smallest = Z;
        }
        System.out.print(smallest);
    }
}
