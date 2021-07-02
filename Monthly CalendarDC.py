calendar = [input().split() for row in range(6)]
if len(calendar[0])==6:
    calendar.append(input().split())
    calendar = [list(row) for row in zip(*calendar)]
hasHoliday=False
days=["Sun","Mon","Tue","Wed","Thu","Fri","Sat"]
date=1
for row in range(6):
    for col in range(7):
        if calendar[row][col].isdigit():
            date+=1
        elif calendar[row][col]=='#':
            print(date,days[col])
            date+=1
            hasHoliday=True
if not hasHoliday:
    print(-1)
