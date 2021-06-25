
n=int(input())
namel=[input().strip()for i in range(n)]
counter=dict()
for i in set(namel):
    counter[i]=0
for i in namel:
    counter[i]+=1
    print(i,end="")
    if(counter[i]>1):
        print(counter[i])
    else:
        print()
