import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int largest = A;
		
		if(B > largest){
            largest = B;
        }
    
        if(C > largest){
            largest = C;
        }
        
        System.out.println(largest);

	}
}
