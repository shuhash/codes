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
