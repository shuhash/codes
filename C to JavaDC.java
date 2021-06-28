import java.util.*; 
public class Hello
{
	public static void main(String[] args) {
	    Scanner s=new Scanner(System.in);
	    int n=s.nextInt();
	    String str="";
	    for(int i=1;i<=n;i++)
	    {
	        str=str+s.next();
	        System.out.println(str);
	        str=str.substring(0,i);
	    }
	    
	}
}

//input:
//4
//first
//second
//third
//fourth
//Output:
//first
//fsecond
//fsthird
