import java.util.*;
class Student{
    String name;
    int mark;
    Student(String name,int mark){
        this.name=name;
        this.mark=mark;
    }
    public void addExtraMarks(int extraMarks){
        this.mark +=extraMarks;
        if(this.mark>100){
            this.mark=100;
        }
       
    }
    @Override
    public String toString(){
        return this.name+":"+this.mark;
    }
}
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        List<Student> students = new ArrayList<>();
        for (int ctr = 1; ctr <= N; ctr++) {
            String studentDetails[] = sc.nextLine().trim().split("\\s+");
            students.add(new Student(studentDetails[0], Integer.parseInt(studentDetails[1])));
        }
        for (Student stud : students) {
            stud.addExtraMarks(sc.nextInt());
            System.out.println(stud);
        }
    }
}
