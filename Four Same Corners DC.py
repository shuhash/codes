def rep(n,c,k,List):
    for i in range(k):
        List[n+i][c+i]='*'
        List[n+i][c+k-1-i]='*'
r,a=map(int,input().split())
List=[input().split() for i in range(r)]
k=int(input())
for i in range(r-k+1):
    for j in range(a-k+1):
        if(List[i][j]==List[i][j+k-1] and List[i][j]==List[i+k-1][j] and List[i][j]==List[i+k-1][j+k-1]):
                rep(i,j,k,List)
                [print(*i)for i in List]
                exit()
