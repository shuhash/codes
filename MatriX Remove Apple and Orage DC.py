def move(l,j):
    for i in range(r,0,-1):
        l[i][j]=l[i-1][j]
        
r,c=map(int,input().split())
l=[input().split()for i in range(r)]
t=int(input())
l=[list('*'*c)]+l
for i in range(t):
    if(l[-1].count('O')>l[-1].count("A")):
        for j  in range(c):
            if(l[-1][j]=='O'):
                move(l,j)
    else:
        for j in range(c):
            if(l[-1][j]=='A'):
                move(l,j)
[print(*i)for i in l[1:]]                
            
