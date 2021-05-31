class Student{
    String name;
    int mark;
    Student(String name,int mark){
        this.name=name;
        this.mark=mark;
    }
    public void addExtraMarks(int extraMarks){
        this.mark +=extraMark;
        this.mark=(this.mark>100)?100:this.mark;
      
       
    }
    @Override
    public String toString(){
        return this.name+":"+this.mark;
    }
}
