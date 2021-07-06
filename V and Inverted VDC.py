s=input().strip()
l=[]
for i in range(len(s)//2+1):
    if(i!=len(s)//2):
        l.append(list(('*'*i)+s[i]+('*'*(len(s)-(2*(i+1))))+s[-(i+1)]+'*'*i))    
    else:
        l.append(list(s[i].center(len(s),'*')))
for i in range(len(l)):
    for j in range(len(l[i])):
        if(l[i][j]=='*' and l[-(i+1)][j]!='*'):
            l[i][j]=l[-(i+1)][j]
print(*["".join(i)for i in l],sep="\n")      
