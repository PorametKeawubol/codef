n : int = int(input())
l : list = list(map(int, input().split()))
max_n : int = max(l)
min_n : int = min(l)
maxIndy : int = l.index(max_n)
minIndy : int = n - 1 - l[::-1].index(min_n)
ans : int = maxIndy +(n - 1 - minIndy) 
if maxIndy > minIndy:
    ans -= 1
print(ans)