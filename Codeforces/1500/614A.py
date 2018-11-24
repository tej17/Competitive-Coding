import math

arr = [int(x) for x in input().split()]

l = arr[0]
r = arr[1]
k = arr[2]

lower = int(math.floor(math.log2(l)/math.log2(k)))
upper = int(math.floor(math.log2(r)/math.log2(k)))
flag = 0
#print(lower)
#print(upper)
for i in range(lower,upper+1):
	if k**i >=l and k**i<=r:
		flag = 1
		print(k**i,end=" ")

if flag==0:
	print("-1",end="")