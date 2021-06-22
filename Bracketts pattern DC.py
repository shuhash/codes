s=input().strip()
n=int(s[1:-1])
o,c=s[0],s[-1]
p=[o+c]
for i in range(n):
    print(*p[::-1],sep="")
    p.append(o+p[-1]+c)
