import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int X = sc.nextInt();
        int multiple=N;
        boolean run = true;
        while(run){
            System.out.print(multiple+" ");
            if(multiple%X == 0){
                run=false;
            }
            multiple+=N;
            
        }
    }
}
