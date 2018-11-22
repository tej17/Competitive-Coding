import math

n = int(input())
ans = 1
if n%2==0:
	ans = ans * 2
while n%2==0:
	n = n/2

for i in range(3,int(math.sqrt(n)+1)):
	if n==1:
		break
	if n%i==0:
		#print(n)
		ans = ans * i

	while n%i==0:
		n = n/i

if n>2:
	ans = ans * n
print(int(ans))