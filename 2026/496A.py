n = int(input())
X = input().split()[1:]
Y = input().split()[1:]
setX = set(map(int,X))
setY = set(map(int,Y))
all_pass = True
for i in range(1,n+1):
    if i not in setX and i not in setY:
        all_pass = False
        break

if all_pass:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")

