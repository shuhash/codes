import java.util.*;
public class Hello {

    public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    double price = sc.nextDouble();
	    String formattedPrice = String.format("%.2f",price);
	    System.out.print("The price is "+formattedPrice);

	}
}
