int* mergeEven(int M, int *arr1, int N, int *arr2)
{
    int *arr=malloc(sizeof(int)*(M+N)),ai=0,a2i=0,e=0;
    for(int i=0;i<M;i++){
        arr[ai++]=arr1[i];
        if(arr1[i]%2==0){
            e++;
            
        }
        if(e==a2i+1)
        {
            arr[ai++]=arr2[a2i++];
            
        }
    }
    return arr;

}
