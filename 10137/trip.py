import sys

# Not Accepted 

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	total = 0.0
	payments = []
	for i in range(n):
		x = float(sys.stdin.readline())
		payments.append(x)
		total = total + x

	average = total / n
	diff = 0.0
	for i in range(n):
		x = payments[i] - average

		if x > 0:
			diff = diff + x

	print("$%.2f"%(diff))