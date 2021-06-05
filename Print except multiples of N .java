import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int reversedNumber = 0;
        while (N > 0) {
            reversedNumber = reversedNumber * 10;
            reversedNumber += N % 10;
            N = N / 10;
        }

        System.out.println(reversedNumber);
    }
}
