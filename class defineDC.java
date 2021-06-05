import java.util.*;
class Event implements Comparable<Event>{
    private String title="";   
    private int registrationFee,duration; 
    public Event(String title,int registration,int duration){   
        this.title=title;       
        this.registrationFee=registration;      
        this.duration=duration;    
        
    }    
    @Override   
    public String toString(){
        return this.title+' '+this.registrationFee+' '+this.duration;
        
    }    
    @Override   
    public int compareTo(Event e){  
        if(this.registrationFee==e.registrationFee){       
            if(this.duration==e.duration)
            {                
                return this.title.compareTo(e.title);
                
            }            
            return this.duration-e.duration;
            
        }        
        return this.registrationFee-e.registrationFee;    
        
    }
    
}
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine().trim());
        List<Event> events = new ArrayList<>();
        for (int ctr = 1; ctr <= N; ctr++) {
            String currEvent[] = sc.nextLine().trim().split("\\s+");
            String title = currEvent[0];
            int registrationFee = Integer.parseInt(currEvent[1]);
            int duration = Integer.parseInt(currEvent[2]);
            events.add(new Event(title, registrationFee, duration));
        }
        Collections.sort(events);
        for (Event event : events) {
            System.out.println(event);
        }
    }
}
