import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int hours, minutes, seconds;
        hours = sc.nextInt();
        minutes = sc.nextInt();
        seconds = sc.nextInt();
        System.out.println(hours + ":" + minutes + ":" + seconds);
    }
}
