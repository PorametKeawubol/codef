n : int = int(input())
l : list = list(map(int, input().split()))
max_n : int = max(l)
min_n : int = min(l)
maxjenmana : int = l.index(max_n)
minjenmana : int = 0
for i in range(n):
    if l[i] == min_n:
        minjenmana = i
        break
ans : int =  maxjenmana + (n - 1 - minjenmana)

if  maxjenmana > minjenmana:
    ans -= 1

print(ans)