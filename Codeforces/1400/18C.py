import math

pre = []
suff = []

n = int(input())
arr = [int(x) for x in input().split()]

s = 0
for i in range(0,n):
	s = s + arr[i]

d = 0
ans = 0
for i in range(0,n):
	d = d + arr[i]
	if d==(s-d) and i!=n-1:
		ans = ans + 1

print (ans)