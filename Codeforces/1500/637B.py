import math

n = int(input())
names = {}
for i in range(0,n):
	x = input()
	names[x] = i
names = sorted(names.items(), key = lambda x: x[1])

ans = []
for key in names:
	ans.append(key[0])

for i in range(len(ans)-1,-1,-1):
	print(ans[i])