#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,n,i,j;
    scanf("%d %d",&r,&c);
    int mat[r][c],check[c],out[r][c]; 
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);     
            
        } 
        
    } 
    scanf("%d",&n); 
    int curr=n-1,next=n,l=0;
    while(1)
    {
        if(curr>=0 & next<=c-1){
            check[curr]=1;         
            check[next]=1;         
            for(int i=0;i<r;i++)         
            {             
                out[i][l]=mat[i][curr]+mat[i][next];         
                
            }         
            i++;     
            
        }     
        else     
        {
            if(curr<0)         
            {
                for(j=0;j<c;j++)             
                {                 
                    if(check[j]==0)                 
                    {
                        curr=out[i][l];
                        
                    }             
                   
                }         
                
            }         
            else         
            {
                for(j=c-1;j>=0;j--)             
                {
                    if(check[j]==0)                 
                    {
                        curr=out[i][j];                
                        
                    }             
                    
                }         
                
            }         
            break;     
            
        }     
        curr--;     
        next++; 
        
    } 
    printf("%d",out[i][l]);
    
}
