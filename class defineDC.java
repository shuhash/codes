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
