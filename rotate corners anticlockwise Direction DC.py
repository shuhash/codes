n=int(input())
L=[input().split()for i in '.'*n]
for i in range(n//2):
    L[i][i],L[i][n-1-i],L[n-1-i][n-1-i],L[n-1-i][i]=L[i][n-1-i],L[n-1-i][n-1-i],L[n-1-i][i],L[i][i]
[print(*i)for i in L]    
