import java.util.*;
class Hello{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int row=0,sum=0;
        while(sc.hasNext()){
            row++;
            if(row%2==1){
                if(row!=1){
                    System.out.print(" ");
                }
                System.out.print(sc.next());
            }
            else{
                sum+=sc.nextInt();
            }
        }
        System.out.print("\n"+sum);
    }
}
