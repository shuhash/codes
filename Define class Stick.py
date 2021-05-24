class Stick:
    def __init__(self,stickLength):
        self.stickLength=stickLength
    def  __add__(self,new):
        return "Length: "+str(self.stickLength+new.stickLength)
stick1 = Stick(int(input().strip()))
stick2 = Stick(int(input().strip()))
stick3 = stick1 + stick2
print(stick3)
