n=int(input())
b=[list(map(int,input().strip().split()))for i in range(n)]
for i in range(n-2,-1,-1):
    for j in range(len(b[i])):
        b[i][j]+=max(b[i+1][j],b[i+1][j+1])
print(b[0][0])        
