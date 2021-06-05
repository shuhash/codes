import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        int sum=0;
        int counter = M;
        while(counter <= N){
            if(counter%2 == 0){
                sum += counter;
            }
            counter++;
        }        
        System.out.print(sum);
    }
}
