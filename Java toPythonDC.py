
s=""
while 1:
    try:
        db=input().split()
        for i in db:
            s+=i[-1]
    except EOFError:
        break
print(s[::-1])
