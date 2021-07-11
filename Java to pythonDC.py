r,c,s=0,0,0
while 1:
    try:
        curr=list(map(int,input().split()))
        r+=1
        if c==0:
            c=len(curr)
        for i in range(0,c):
            s+=curr[i]
    except:
        break
print(r,c) 
print(s)
