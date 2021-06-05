import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int hours = sc.nextInt();
		int minutes = sc.nextInt();
		int seconds = hours*60*60 + minutes*60;
		System.out.print(seconds);
	}
}
