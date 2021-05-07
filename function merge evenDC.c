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
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int arr1[M], arr2[N];
    for(int index = 0; index < M; index++)
    {
        scanf("%d", &arr1[index]);
    }
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr2[index]);
    }
    int *mergedArr = mergeEven(M, arr1, N, arr2);
    printf("Array 1: ");
    for(int index = 0; index < M; index++)
    {
        printf("%d ", arr1[index]);
    }
    printf("\nArray 2: ");
    for(int index = 0; index < N; index++)
    {
        printf("%d ", arr2[index]);
    }
    printf("\nMerged Array: ");
    for(int index = 0; index < M+N; index++)
    {
        printf("%d ", mergedArr[index]);
    }
    return 0;
}
