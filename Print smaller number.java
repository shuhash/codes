import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        if(A == B){
            System.out.print("EQUAL");
        }else
        if(A < B)
        {
            System.out.print(A);
        }else
        {
            System.out.print(B);
        }

    }
}
