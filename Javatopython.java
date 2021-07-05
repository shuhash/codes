import java.util.*;
import java.util.stream.Collectors;
public class hello{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in); 
    Set<Integer> numSet = new TreeSet<>(); 
    while (sc.hasNextLine()) {
      List<Integer> numList = Arrays.stream(sc.nextLine().trim().split("\\s+")) 
        .map(Integer::valueOf) 
        .collect(Collectors.toList());
      numSet.addAll(numList); 
    } 
    for (int num : numSet) {
      System.out.print(num + " "); 
    } 
  } 
}
