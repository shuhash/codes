def minm(l):
    s=min(l,key=len)
    mlen=len(s)
    i=0
    while(i<len(l)):
        print(l[i][:mlen])
        if(len(l[i])==mlen):
            l.pop(i)
            i-=1
        else:
            l[i]=l[i][mlen:]
        i+=1
a=int(input())
l=[input().strip()for i in range(a)]
while(l):minm(l)
