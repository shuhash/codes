import java.util.*;
class Company{
    String domainName;
    Company(String domainName){
        this.domainName=domainName;
    }
    String generateEmailId(String Name,String Role){
        return(Name+"."+Role+"@"+domainName).toLowerCase();
    }
}
public class Hello {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in); 
    String domainName = sc.nextLine().trim(); 
    Company company = new Company(domainName); 
    int N = Integer.parseInt(sc.nextLine().trim()); 
    for (int ctr = 1; ctr <= N; ctr++) {
      String emp[] = sc.nextLine().trim().split("\\s+"); 
      System.out.println(company.generateEmailId(emp[0], emp[1])); 
    } 
  } 
}
