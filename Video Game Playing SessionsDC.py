sh,sm,eh,em=map(int,":".join(input().split()).split(':'))
pt,rt=map(int,input().split())
st=(sh*60)+sm
et=(eh*60)+em
flag=1
while((st+pt)<=et):
    print(str(st//60).zfill(2),str(st%60).zfill(2)+" - "+str((st+pt)//60).zfill(2),str((st+pt)%60).zfill(2),sep=":")
    st+=(pt+rt)
    flag=0
if(flag==1):print(-1)
