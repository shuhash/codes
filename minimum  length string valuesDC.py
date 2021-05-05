N = int(input())
L = [input().strip() for i in range(N)]
while L:
    l = len(min(L, key = len))
    [print(i[:l]) for i in L if i]
    L = [i[l:] for i in L if i[l:]]
