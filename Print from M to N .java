import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        int counter=M;
        while(counter <= N){
            System.out.print(counter++ + " ");
        }

    }

}
