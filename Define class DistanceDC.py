class Distance:
  def __init__(self,feet,inches):
    self.feet=feet
    self.inches=inches
  def __add__(obj1,obj2):
    feetsum=obj1.feet+obj2.feet
    inchessum=obj1.inches+obj2.inches
    if inches>=12:
      while inchessum>=12:
        inchessum-=12
        feetsum+=1
    return Distance(feetsum,inchessum)
  def __str__(self):
    return str(self.feet)+" "+str(self.inches)
  def addInches(self,X):
    self.inches+=X
    if self.inches>=12:
      while self.inches>=12:
        self.inches+=12
        self.feet+=1
