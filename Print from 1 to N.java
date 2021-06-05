import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int counter=1;
        while(counter <= N){
            System.out.print(counter++ + " ");
        }

    }
