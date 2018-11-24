import math

n = int(input())

arr = [int(x) for x in input().split()]
ideal = []
s = 0
for i in arr:
	s+=i
div = int(s/n)
rem = s%n
for i in range(0,n):
	if rem>0:
		ideal.insert(i,div+1)
		rem-=1
	else:
		ideal.insert(i,div)

ideal.sort()
arr.sort()
#print(ideal)
#print(arr)
ans = 0
for i in range(0,n):
	ans+= int(abs(ideal[i]-arr[i]))
print(int(ans/2))