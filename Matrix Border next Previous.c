#include<stdio.h>
#include<stdlib.h>
int i1=0,j1=0,r,c;
void getIndex()
{
    if(i1==0 && j1==0) j1++;
    else if(i1==0 && j1==c-1)i1++;
    else if(i1==r-1 && j1==c-1)j1--;
    else if(i1==r-1 && j1==0)i1--;
    else if(i1==0)j1++;
    else if(j1==c-1)i1++;
    else if(i1==r-1)j1--;
    else if(j1==0)i1--;
    
}
int main()
{
    int k;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
        
    }
    scanf("%d",&k);
    int row=-1,col=-1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 ||  j==c-1)
            {
                if(mat[i][j]==k && row==-1 && col==-1){
                    row=i;col=j;
                    
                }  
                
            } 
            
        }
        
    }
    if(row==-1 && col==-1)printf("-1"),exit(0);
    int size = (r*2)+((c-2)*2);
    int border[size];
    int ind=-1;
    for(int i=0;i<size;i++){
        if(i1==row && j1==col){
            ind = i;
            
        }
        border[i] = mat[i1][j1];
        getIndex();
        
    }
    int left = ind,right = ind,l=size;
    while(size>0){
        int ind1 = left%l;
        int ind2 = right%l;
        if(ind1==ind2){
            printf("%d ",border[ind1]);
            size-=1;
            
        }
        else{
            printf("%d %d ",border[ind1],border[ind2]);
            size-=2;
            
        }
        if(left==0)left=l;
        left--;
        right++;
        
    }
    
}
