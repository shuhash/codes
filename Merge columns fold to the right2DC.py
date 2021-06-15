r,c = map(int,input().split())
mat = [list(map(int,input().split()))for i in range(r)]
n = int(input())
for row in range(r):
    for col in range(c):
        if((n-1-col)>=0 and (n+col)<c):
            print(mat[row][n-1-col]+mat[row][n+col],end=" ")
        elif(n-1-col>=0):
            print(mat[row][n-1-col],end=" ")
        elif(n+col<c):
            print(mat[row][n+col],end=" ")        
        else:            
            break    
    print()
