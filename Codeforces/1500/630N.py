import math

arr = [int(x) for x in input().split()]

a = arr[0]
b = arr[1]
c = arr[2]

num = (-1*b + math.sqrt(b*b-4*a*c))
den = 2*a
ans1 = num/den

num = (-1*b - math.sqrt(b*b-4*a*c))
den = 2*a
ans2 = num/den
if ans1>=ans2:
	print('%.9f'%ans1)
	print('%.9f'%ans2)
else:
	print('%.9f'%ans2)
	print('%.9f'%ans1)