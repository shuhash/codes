import java.util.*;
public class Hello {

    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	 int amountInHand = sc.nextInt();
	 int beggarCount = sc.nextInt();
	 int initialAmount=amountInHand;
     int counter=1;
    
     while(counter <= beggarCount){
        initialAmount = initialAmount*2;
        counter++;
     }
     
     System.out.print(initialAmount);

	}
}
