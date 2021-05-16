a,b=map(int,input().split())
Mat=[list(map(int,input().split()))for i in range(a)]
x,y=map(int,input().split())
print(*[i*j for i,j in zip(Mat[x-1],Mat[y-1][::-1])])
