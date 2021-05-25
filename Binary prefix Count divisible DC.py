(lambda n,x:print(len([i for i in [int(bin(n)[2:][:len(bin(n)[2:])-i],2)for i in range(len(bin(n)[2:]))] if(i%x==0)])))(*list(map(int,input().split())))





                                                or
  
  
  n,x=map(int,input().split())
  b=bin(n)[2:]
  list=[int(b[:len(b)-i],2)for i in range(len(b))]
  count=len([i for i in List if(i%x==0)])
  print(count)
