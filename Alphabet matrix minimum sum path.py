r,c=map(int,input().split())
l=[input().lower().split()for i in range(r)]
xs,ys=map(lambda x:int(x)-1,input().split())
xe,ye=map(lambda x:int(x)-1,input().split())
vh=[];hv=[];i,j=xs,ys
while(i!=xe):
    vh.append(ord(l[i][j])-ord('a')+1)
    i+=1 if(i<xe)else -1
while(j!=ye):
    vh.append(ord(l[i][j])-ord('a')+1)
    j+=1 if(j<ye)else -1
vh.append(ord(l[i][j])-ord('a')+1)
i,j=xs,ys
while(j!=ye):
    hv.append(ord(l[i][j])-ord('a')+1)
    j+=1 if(j<ye)else -1
while(i!=xe):
    hv.append(ord(l[i][j])-ord('a')+1)
    i+=1 if(i<xe)else -1
hv.append(ord(l[i][j])-ord('a')+1)
vh=sum(vh);hv=sum(hv);print(min([vh,hv]))
