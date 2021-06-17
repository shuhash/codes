import java.util.scanner;
import com.skilrack.BasicCalculator;
public class Hello {
public static void main(String args[]) {
Scanner sc = new Scanner(System.in);
int X = sc.nextInt(); 
int Y = sc.nextInt(); 
System.out.println(BasicCalculator.addition(X, Y)); 
System.out.println(BasicCalculator.subtraction(X, Y)); 
System.out.println(BasicCalculator.multiplication(X, Y)); 
System.out.println(BasicCalculator.integerDivision(X, Y));
System.out.printf("%.3f\n", BasicCalculator.floatDivision(X, Y)); 
System.out.println(BasicCalculator.modulo(X, Y)); 
}
}


import com.skillrack;
public class BasicCalculator{
  public static int addition(int a, int b){
    return a+b;
  }
  public static int subtraction(int a, int b){
    return a-b;
  }
  public static int multiplication(int a, int b){
    return a*b;
  }
  public static int integerDivision(int a, int b){
    return a/b;
  }
  public static float floatDivision(int a, int b){
    return (float) a/b;
  }
  public static int modulo(int a, int b){
    return a%b;
  }
}
    
    
