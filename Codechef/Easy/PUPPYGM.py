import math

t = int(input())
for i in range(t):
	arr = [int(x) for x in input().split()]
	a = arr[0]
	b = arr[1]
	if a%2==0 or b%2==0:
		print("Tuzik")
	else:
		print("Vanka")