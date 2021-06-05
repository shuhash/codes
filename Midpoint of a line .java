import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        double midx = (x1 + x2) / 2.0;
        double midy = (y1 + y2) / 2.0;
        System.out.println(String.format("%.1f", midx));
        System.out.println(String.format("%.1f", midy));
    }
}
