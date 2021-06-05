import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int length = sc.nextInt();
        int breadth = sc.nextInt();
        int height = sc.nextInt();
        int volume = length*breadth*height;
        System.out.println(volume);        
    }
}
