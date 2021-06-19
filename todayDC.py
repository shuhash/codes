a=input().split()
temp=1
for i in range(len(a)):
    for j in range(len(a)):
        if (i!=j and a[i]+a[j]==(a[i]+a[j])[::-1]):
            print((a[i]+a[j]))
            temp=0
if temp==0:
    print(-1)
