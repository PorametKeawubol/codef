n = input()
l = list(map(int , input().split()))
a,b  = map(int, input().split())
# print(n,l)
ans = 0

# print(a,b)
for a in range(a,b,1):
 ans+=l[a-1]
 # print(ans)
print(ans)
