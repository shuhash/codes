a=int(input())
list=[input().strip().split(' - ')for i in range(n)]
for i in range(n-1):
  for j in range(n+1):
    print(list[i][0],"vs",list[j][0],'('+list[i][1]+')')
    print(list[j][0],"vs",list[i][0],'('+list[j][1]+')')
