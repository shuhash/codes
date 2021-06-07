class Rectangle:
    rectangleCount=0,totalArea=0
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
        Rectangle.rectangleCount+=1
        Rectangle.totalArea+=(length*breadth)
    def __del__(self):
        Rectangle.rectangleCount-=1 
        Rectangle.totalArea-=(self.length*self.breadth)
    def __str__(self):
        return f"Length={self.length}, Breadth={self.breadth}, Area={self.length*self.breadth}"
N = int(input())
rectangles = []
for ctr in range(N):
    length, breadth = map(int, input().split())
    rectangles.append(Rectangle(length, breadth))
X = int(input())
print(Rectangle.rectangleCount)
print(Rectangle.totalArea)
del rectangles[X-1]
for rect in rectangles:
    print(rect)
print(Rectangle.rectangleCount)
print(Rectangle.totalArea)


                        or
  
  



    def __str__(self):
        return "Length:{}, Breadth:{}, Area:{}".format(self.length,self.breadth,self.length*self.breadth)
