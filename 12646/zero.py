import sys

def count_zero(t):
	count = 0
	for i in t:
		if i == 0:
			count = count + 1

	return count

for line in sys.stdin:
	t = [int(i) for i in line.strip().split()]

	counts = count_zero(t)

	a = t[0]
	b = t[1]
	c = t[2]

	if counts == 0 or counts == 3:
		print("*")
	elif counts == 1:
		if a == 0:
			print("A")
		elif b == 0:
			print("B")
		else:
			print("C")
	else:
		if a == 1:
			print("A")
		elif b == 1:
			print("B")
		else:
			print("C")
