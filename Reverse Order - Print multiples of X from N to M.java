import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        int X = sc.nextInt();
        int counter = N;
        while(counter >= M){
            if(counter%X == 0){
                System.out.print(counter + " ");        
            }
            counter--;
        }        
    }
}
