import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int sum=0;
        while(N > 0){
            int unitDigit = N%10;
            if(unitDigit%2 == 1){
                sum += unitDigit;
            }
            N = N/10;
        }
        System.out.print(sum);
    }
}
