import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int age = sc.nextInt();
        double salary = sc.nextDouble();
        System.out.println(name);
        System.out.println("**");
        System.out.println(age);
        System.out.println("**");
        System.out.println(String.format("%.2f", salary));
    }
}
