n=int(input())   ###
 l=l(l(map(int,input().split())) ###
 x=int(input()) ###
(lambda n,l,x:print(sorted(set(l))[::-1].index(l[x-1])+1))(int(input()),list(map(int,input().split())),int(input()))
     
     
     
     
     
     
     2nd method:
     
n=int(input())
L=[*map(int,input().split())]
print((sorted(set(L),reverse=True).index(L[int(input())-1]))+1)
