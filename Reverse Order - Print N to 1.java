
import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int counter = N;
        while(counter >= 1){
            System.out.print(counter-- + " ");        
        }        
    }
}
