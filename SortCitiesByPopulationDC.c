






















import java.util.*; 
class City implements Comparable<City>{
  String name;
  int men,women;
  City(String name,int men,int women){
    this.name=name; 
    this.men=men; this.women=women; 
  }
  @Override
    public int compareTo(City city){
    if((this.men+this.women)==(city.men+city.women)){
      if(this.men==city.men){
        return this.name.compareTo(city.name); 
      } 
      return city.men-this.men; 
    } 
    return (city.men+city.women)-(this.men+this.women); 
  } 
  @Override public String toString(){
    return this.name+" "+this.men+" "+this.women; 
  } 
} 
public class Hello {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = Integer.parseInt(sc.nextLine().trim());
    List<City> cities = new ArrayList<>();
    for (int ctr = 1; ctr <= N; ctr++) {
      String currCity[] = sc.nextLine().trim().split("\\s+");
      cities.add(new City(currCity[0], Integer.parseInt(currCity[1]), Integer.parseInt(currCity[2]))); 
    } 
    Collections.sort(cities); 
    for (City city : cities) {
      System.out.println(city); 
    } 
  } 
}


























































