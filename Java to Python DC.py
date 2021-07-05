L=[]
while True:
    try:
        numL=list(map(int,input().split()))
        L.extend(numL)
    except EOFError:
        print(*sorted(set(L)))
        break;
