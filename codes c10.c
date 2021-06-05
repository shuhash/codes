 Primary Color Code
 
    char c;
    c = getchar();
    if( c == 'r' || c == 'R')
    {
        printf("RED");
    }
    else if( c == 'g' || c == 'G')
    {
        printf("GREEN");
    }
    else if( c == 'b' || c == 'B')
    {
        printf("BLUE");
    }
    else
    {
        printf("UNDEFINED");
    }
    
    
    
     Digit In Tenth Position
     
     int N;
    scanf("%d",&N);
    int tenthdigit = (N/10)%10;
    printf("%d",tenthdigit);
    
     Triangle - Smallest Side
     
     int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int smallest=X;
    if(Y < smallest)
    {
        smallest = Y;
    }

    if(Z < smallest)
    {
        smallest=Z;
    }

    printf("%d",smallest);int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int smallest=X;
    if(Y < smallest)
    {
        smallest = Y;
    }

    if(Z < smallest)
    {
        smallest=Z;
    }

    printf("%d",smallest);
    
     Reverse Number:
     
     int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int smallest=X;
    if(Y < smallest)
    {
        smallest = Y;
    }

    if(Z < smallest)
    {
        smallest=Z;
    }

    printf("%d",smallest);

Print except multiples of N (Id-2296)
  
    int N;
    scanf("%d",&N);

    int sum=0;
    int ctr=N;
    int curr;

    while(ctr > 0)
    {
        scanf("%d",&curr);
        sum+=curr;
        ctr--;
    }

    printf("%d",sum);

 Polygon Perimeter (Id-2530)
int N;
    scanf("%d",&N);

    int newNum=0;
    while(N > 0)
    {
        newNum = newNum*10;
        newNum += N%10;
        N = N/10;
    }

    printf("%d",newNum);

 Largest among N numbers (Id-2303)

   
    int N;
    scanf("%d",&N);
    int perimeter=0, counter=0;
    int side;
    while(++counter <= N)
    {
        scanf("%d",&side);
        perimeter+=side;
    }
    printf("%d",perimeter);


     Multiple of N till divisible by X:

int N,X;
    scanf("%d%d",&N,&X);

    int multiple=N;
    int run=1;
    while(run)
    {
        printf("%d ",multiple);

        if(multiple%X == 0)
        {
            run=0;
        }

        multiple+=N;
    }


 Interlace odd / even from A to B.
   
    int X, Y, i, j;
    scanf("%d%d", &X, &Y);
    for( i = X, j = Y; i <= Y; i++, j--)
    {
        if( i % 2 == 1)
        {
            printf("%d ", i);
        }
        if( j % 2 == 0)
        {
            printf("%d ", j);
        }
    }
