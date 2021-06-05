import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		 int bottomLeftX = sc.nextInt();
		 int bottomLeftY = sc.nextInt();
		 int length = sc.nextInt();
		 int topRightX = bottomLeftX+length;
         int topRightY = bottomLeftY+length;
         System.out.println(topRightX);
         System.out.println(topRightY);
	}
}
