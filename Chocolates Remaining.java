import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int chocolates = sc.nextInt();
        int students = sc.nextInt();
        int chocolatesRemaining = chocolates%students;
        System.out.println(chocolatesRemaining);        
    }
}
