import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int largest = 0;
        int counter=1;
        
        while(counter <= N){
            int currentNumber = sc.nextInt();
            if(counter == 1){
                largest = currentNumber;
            }else
            {
                if(currentNumber > largest){
                    largest = currentNumber;
                }
            }
            counter++;
        }
        
        System.out.println(largest);
        
    }
   }
