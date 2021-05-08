a=input().strip()
b=input().strip()
match=True
al=len(a)//2
ar=al
bl=br=len(b)//2
s=""
while(match):
  match=(a[al]==b[bl] and a[ar]==b[br])
  if(match):
    s=a[al]+s+a[ar]if(ar!=al)else a[al]+s
  if(al>-1 and bl>-1 and ar<len(a)-1 and b<len(b)-1):al-=1;bl-=1;ar+=1;br+=1
  else:break
print(s if(s)else "-1")    
