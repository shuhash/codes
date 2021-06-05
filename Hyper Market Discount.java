import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int billAmount = sc.nextInt();
        int payableAmount = billAmount;

        if (billAmount > 2000) {
            payableAmount = (int) (billAmount * 0.9);
        }
        
        System.out.println(payableAmount);
    }

}
