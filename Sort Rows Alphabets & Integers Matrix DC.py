r,c=map(int,input().split())
L=[input().split()for i in range(r)]
for i in range(r):
    temp=[j for j in L[i]if(j.isalpha())]
    L[i]=temp+L[i]
L=sorted(L,key=lambda x:x[0],reverse=True)[::-1]
[print(*i[1:])for i in L]
