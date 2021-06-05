import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String country,capital;
        double perCapitaGDP;
        country = sc.nextLine();
        capital = sc.nextLine();
        perCapitaGDP = sc.nextDouble();        
        System.out.println("The capital of "+country+ " is "+ capital+" and it's GDP is "+String.format("%.2f", perCapitaGDP));
    }
}
