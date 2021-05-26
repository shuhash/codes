boundedArray* getColumn(int R, int C, int matrix[][C],int K){
    boundedArray *ba=malloc(sizeof(boundedArray));
    ba->SIZE=R;
    ba->arr=(int*)malloc(sizeof(int)*R);
    for(int i=0;i<R;i++){
        ba->arr[i]=matrix[i][k-1];
    }
    return ba;
}
