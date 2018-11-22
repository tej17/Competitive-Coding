import math

n= int(input())
arr = [int(x) for x in input().split()]

s = 0;
d = 0;
for i in range(0,n):
	s = s + arr[i]

for i in range(0,n):
	d = d+arr[i]
	if d>=s/2:
		print(i+1)
		break