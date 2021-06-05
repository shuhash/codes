import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        
        if(M%N == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }        
        
    }

}
