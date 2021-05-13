def sep(x):
    a=[i for i in b if(i.isalpha())][0]
    return [int(x.replace(t,'')),t]
c=list(map(seperator,input().split('_')))
print(''.join([i[1]for i in sorted(s,key=lambda x:x[0])]))
