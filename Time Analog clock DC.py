t=[[11,12,1],[10,2],[9,3],[8,4],[7,6,5]]
temp=[]
for i in range(5):
    a=input().replace('*',' ')
    temp.append(list(map(int,a.split())))
b,c=map(int,input().split())
for i in range(5):
    if(b in temp[i]):
        d=t[i][temp[i].index(b)]
    if(c in temp[i]):
        e=t[i][temp[i].index(c)]*5%60
print(str(d).zfill(2),str(e).zfill(2),sep=":")        
