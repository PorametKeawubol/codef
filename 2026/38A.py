n = input()
l = list(map(int , input().split()))
a,b  = map(int, input().split())
# print(n,l)
ans = 0
l.sort()
c : int = b - a 
for i in range(c):
 ans+=l[i]
 c-=1
print(ans)
