import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int startCount = sc.nextInt();
        int endCount = sc.nextInt();
        int soldCount = startCount - endCount;
        System.out.println(soldCount);        
    }
}
