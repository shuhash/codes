import java.util.*;
class Student{
    String name,reg;
    int age;
    Student(String name,int age,String reg) {
        this.name=name.toLowerCase();
        this.age=age;
        this.reg=reg;
    }
    public boolean equals(Student student){
        return this.name.equalsIgnoreCase(student.name)&&this.age==student.age&&this.reg.equalsIgnoreCase(student.reg);
       
    }
}
public class Hello { 
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in); 
    Student student1 = getStudent(sc); 
    Student student2 = getStudent(sc); 
    System.out.println(student1.equals(student2) ? "EQUAL" : "NOT EQUAL"); 
  } //end of main method 
  private static Student getStudent(Scanner sc) {
    String name = sc.nextLine().trim(); 
    int age = Integer.parseInt(sc.nextLine().trim()); 
    String country = sc.nextLine().trim(); 
    return new Student(name, age, country); 
  } 
  
} 
