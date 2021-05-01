def chess(c):
    t=((('0'*m)+('1'*m))*((m*n)//(m*2)))[::-1].zfill(m*n)[::-1]
    if(c):t=t.replace('0','*').replace('1','0').replace('*','1')
    [print(*list(t))for i in range(m)]
m,n=map(int,input().split())
for i in range(n):
    chess(i%2)
