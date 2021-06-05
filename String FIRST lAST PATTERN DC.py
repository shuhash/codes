s=input().strip()
for x in range(1,len(s)+1):
    print(s[:x][::-1]+s[- x:][::-1]
          
          
or
          
 
(lambda s:print(*list(map(lambda x:s[:x][::-1]+s[-X:][::-1],list(range(1,len(s)+1)))),sep="\n"))(input().strip())          
