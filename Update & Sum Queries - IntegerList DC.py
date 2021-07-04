class IntegerList:
    def __init__(self,List):
        self.List=List[::]
    def updateRange(self,left,right,val):
        for i in range(left-1,right):
            self.List[i]+=val
    def getSum(self,left,right):
        return sum(self.List[left-1:right])
from integerlist import IntegerList 
numList = IntegerList(list(map(int, input().strip().split()))) 
Q = int(input().strip()) 
for ctr in range(Q):
    query = input().split() 
    queryType = int(query[0]) 
    if queryType == 1: 
        left, right, val = map(int, query[1:])
        numList.updateRange(left, right, val) 
    elif queryType == 2: 
        left, right = map(int, query[1:]) 
        print(numList.getSum(left, right))
