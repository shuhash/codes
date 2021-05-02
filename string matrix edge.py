a,b=map(int,input().split())
List=["".join(input().split())for i in range(a)]
k=input().strip()
t=["".join(i) for i in list(zip(*List))]
for i in  range(a//2):
    if(k in List[i] or k in List[i][::-1]):
        print("Top")
        exit()
for i in range(b//2,b):
    if(k in t[i] or k in t[i][::-1]):
        print("Right")
        exit()
for i in range(a//2,a):
    if(k in List[i] or k in List[i][::-1]):
        print("Bottom")
        exit()
for i in range(b//2):
    if(k in t[i] or k in t[i][::-1]):
        print("Left")
        exit()
print(-1)        
