n=int(input())
l=list(map(int,input().split()))
k=int(input())-1
l=sum(list(map(lambda x:x^(1<<k)if(len(bin(x)[2:])>k)else x,l)))
print(l)
