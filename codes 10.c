Print from 1 to N (Id-2284)
int N;
    scanf("%d",&N);
    int counter=1;
    while(counter <= N){
        printf("%d ",counter++);
    }
Print from M to N (Id-2285)   
    int M,N;
    scanf("%d%d",&M,&N);
    int counter=M;
    while(counter <= N){
        printf("%d ",counter++);
    }
 Reverse Order - Print N to 1 (Id-2289)
    
    int M,N;

   scanf("%d%d",&M,&N);
   int ctr=N;
   while(ctr >= M){
      printf("%d ",ctr--);
   }
Reverse Order - Print N to M (Id-2290)
   
   int M,N;

    scanf("%d%d",&M,&N);
    int ctr=M;
    int sum = 0;
    while(ctr <= N)
    {
        if(ctr%2 == 0)
        {
            sum+= ctr;
        }
        ctr++;
    }

    printf("%d",sum)

Sum of even numbers from M to N (Id-2294)
    
     int N,X;

    scanf("%d%d",&N,&X);
    int ctr=1;

    while(ctr <= X)
    {
        printf("%d ",ctr*N);
        ctr++;
    }
  
  Print first X multiples (Id-2293)   
    int M,N;

    scanf("%d%d",&M,&N);
    int ctr=M;
    int sum = 0;
    while(ctr <= N)
    {
        if(ctr%2 == 1)
        {
            sum+= ctr;
        }
        ctr++;
    }

    printf("%d",sum);

Print multiples of 15 from M to N (Id-2286

    int M,N;
    scanf("%d%d",&M,&N);
    int counter=M;
    while(counter <= N){
        if(counter%15 == 0){
            printf("%d ",counter);
        }
        
        counter++;
    }

Reverse Order - Print multiples of X from N to M (Id-2291)    

      int M,N,X;

    scanf("%d%d%d",&M,&N,&X);
    int ctr=N;
    while(ctr >= M)
    {
        if(ctr%X == 0)
        {
            printf("%d ",ctr);
        }
        ctr--;
    }
 
 Sum of odd digits in a number (Id-2295) 
 
    int N;
    scanf("%d",&N);
    int sum = 0;

    while(N > 0)
    {
        int ud=N%10;
        if(ud%2 == 1)
        {
            sum+= ud;
        }
        N = N/10;
    }

    printf("%d",sum);
    
    
    
