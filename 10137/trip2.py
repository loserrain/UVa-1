import sys

# Not Accepted 

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	total = 0.0
	payments = []
	for i in range(n):
		x = int(round(float(sys.stdin.readline()) * 100))
		payments.append(x)
		total = total + x

	average = round(total / n) 
	
	pos_diff = 0.0
	neg_diff = 0.0

	for i in range(n):
		x = int(payments[i] - average)

		if x > 0:
			pos_diff = pos_diff + x
		else:
			neg_diff = neg_diff - x

	print("payments: ", payments)

	print("diff: ", pos_diff, neg_diff)
	amount = min(pos_diff, neg_diff)

	print("$%.2f"%(amount / 100))