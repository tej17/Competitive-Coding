import math

numbers = []

for i in range(0,32):
	for j in range(0,21):

		var = (2**i)*(3**j)
		if var > (2*(10**9)):
			break
		else:
			numbers.append(var)

numbers.sort()
ans = 0
arr = [int(x) for x in input().split()]
l = arr[0]
r = arr[1]
for i in range(0,len(numbers)):
	if numbers[i]>=l and numbers[i]<=r:
		ans = ans + 1
print(ans)