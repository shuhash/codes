def check(i,j):return len(set(l[i][j:j+3]+l[i+1][j:j+3]+l[i+2][j:j+3]))==9
def replace(i,j,l):l[i][j:j+3]=[1,2,3];l[i+1][j:j+3]=[4,5,6];l[i+2][j:j+3]=[7,8,9];
a,b=map(int,input().split())
l=[input().split() for i in range(a)]
for i in range(0,a,3):
    for j in range(0,b,3):
        if(check(i,j)):replace(i,j,l)
[print(*i)for i in l]    
