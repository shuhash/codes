import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt();
		int counter=M;
		while(counter <= N){
		    if(counter%15 == 0){
		        System.out.print(counter+" ");
        }
		    counter++;
    }

    }
}
