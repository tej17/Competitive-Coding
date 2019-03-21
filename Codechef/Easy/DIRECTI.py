import math

t = int(input())
for i in range(t):
	n = int(input())
	l = []
	directions = []
	places = []
	for j in range(n):
		s = str(input())
		words = s.split(" on ")
		directions.append(words[0])
		places.append(words[1])
	print(directions[0]+" on "+places[n-1])
	for j in range(n-1,0,-1):
		if directions[j]=="Right":
			directions[j]="Left"
		elif directions[j]=="Left":
			directions[j]="Right"
		print(directions[j]+" on "+places[j-1])