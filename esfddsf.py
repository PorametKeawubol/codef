from sys import stdin
input=lambda :stdin.readline()[:-1]
 
def solve():
  n,k=map(int,input().split())
  if n==1:
    print(1)
    print(1)
    return
  if k==1 or k==n:
    print(-1)
    return
  if k&1:
    print(3)
    print(1,k-1,k+2)
  else:
    print(3)
    print(1,k,k+1)
 
 
for _ in range(int(input())):
  solve()