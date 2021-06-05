import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
	    int startAmount= sc.nextInt();
	    int dayCount = sc.nextInt();
	    int payableAmount=0;
        int counter=0;
        while(counter < dayCount){
            payableAmount+= (startAmount + counter*200);
            counter++;
        }
        
        System.out.print(payableAmount);

	}
}
