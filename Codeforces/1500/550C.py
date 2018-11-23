import math

n = input()
if len(n)==1:
	if int(n)==0 or int(n)==8:
		print("YES")
		print(n)
	else:
		print("NO")
elif len(n)==2:

	if int(n)%8==0:
		print("YES")
		print(n)

	elif int(n[0])%8==0:
		print("YES")
		print(n[0])

	elif int(n[1])%8==0:
		print("YES")
		print(n[1])

	else:
		print("NO")

else:	
	flag = 0
	t1,t2,t3 = 0,0,0
	for i in range(int(len(n)-1),-1,-1):
		ans = int(n[i])
		if ans%8==0:
			t6=n[i]
			flag=3
			break
		for j in range(i-1,-1,-1):
			val = int(n[j])*10 + int(n[i])
			if val%8==0:
				t4 = n[i]
				t5 = n[j]
				flag=2
				break;

			for k in range(j-1,-1,-1):
				temp = int(n[k])*100 + int(n[j])*10 + int(n[i])*1
				#print(temp)
				#print(k)
				if temp%8==0:
					t1=n[i]
					t2=n[j]
					t3=n[k]
					flag = 1
					#print(t3,t2,t1)
					break
			if flag==1:
				break
		if flag==1 or flag==2:
			break

	if flag==1:
		print("YES")
		print(t3,end="")
		print(t2,end="")
		print(t1,end="")

	elif flag==2:
		print("YES")
		print(t5,end="")
		print(t4,end="")

	elif flag==3:
		print("YES")
		print(t6,end="")

	else:
		print("NO")