s=list(input().strip())
l=[]
for i in range(len(s)):
    if(s[i].lower() in "aeiou"):
        if(l):
            s[i],s[l[1]]=l[0],s[i]
            l=[]
        else:
            l=[s[i],i]
print(*s,sep="")
