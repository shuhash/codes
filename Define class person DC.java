class pers{
  private String name;
  private int weight;
  private double height;
  pers(String named,int weight,double height){
    name=named;
    this.weight=weight;
    this.height=height;
  }
  public double getBoadyMassIndex(){
    return weight/(height*height);
  }
  @Override
  public String toString(){
    return "Name: "+name+"\nWeight: "+weight+"kg\nHeight :"+String.format("%.2f",height)+" m";
  }
}
