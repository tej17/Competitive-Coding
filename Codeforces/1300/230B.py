import math

prime = [True for i in range(1000000+1)]

def SieveOfEratosthenes(n):

	p = 2
	while (p * p <= n):	
		if (prime[p] == True): 
			for i in range(p * p, n+1, p): 
				prime[i] = False
		p += 1



n = int(input())
arr = [int(x) for x in input().split()]
maximum = -1
for i in range(0,n):
	if arr[i]>maximum:
		maximum = arr[i]

maximum = int(math.sqrt(maximum+1))
SieveOfEratosthenes(maximum)
for i in range(0,n):
	s = int(math.sqrt(arr[i]))
	if s*s==arr[i] and prime[s]==True and s!=1:
		print("YES")
	else:
		print("NO")
