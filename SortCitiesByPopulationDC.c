Sort Cities by Population:


/*The program must accept the names of N cities as the input. The number of men and women in each city are also ENCEITO passed as the input. The program must sort the cities in descending order based on the total population. 
If two or more cities have the same population, then the program must sort those cities in descending order based on the number of men It two or more citles have the same population and the same number of men, 
then the program must sort those cities based on their names.
Your task is to define the class City so that the program runs successfully.

Example Input/Output 1:
Input:
5
KRRCity 4000 3500

HTechCity 5000 3300

MGCity 3500 4000

ABBCity 4000 3500 

YSKCity 3100 1900)

Output

Teccy 5000 3100 
  
ABCity 4000 3500

KRRCity 4000 3500

MGCity 3500 4000

YSKCity 3100 1900

Explanation:

Here N = 5, the names of the 5 cities along with the number of men and women are given below.

KRRCity 4000 3500 
HechCity 5000 3300
MGCity 3500 4000
ABBCity 4000 3500
YSKCity 3100 1900
  
Example Input/Output 2: 6

Input:

RPCity 6200 5800 

SOGCity 1300 2100

EKYCity 5000 8000 
  
GUDDCity 6200 5800 
  
EXLOCity 6500 5500 

MYNCity 2450 1950

Output:

EKYCity 5000 8000

EXLOCity 6500 5500 
  
GUDDCity 6200 5800 
  
RPCity 6200 5800

MYNCity 2450 1950 
  
SOGCity 1300 2100

Max Execution Time Limit: 50 millisecs*/

  
 
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


























































