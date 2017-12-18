import sys
import math

def calculate_tax(x):
	tax = 0

	if x <= 180000:
		tax = tax + 0
	elif x > 180000 and x <= 480000:
		tax = tax + (0.1 * (x - 180000))
	elif x > 480000 and x <= 880000:
		tax = tax + (0.1 * 300000) + (0.15 * (x - 480000))
	elif x > 880000 and x <= 1180000:
		tax = tax + (0.1 * 300000) + (0.15 * 400000) + (0.2 * (x - 880000))
	else:
		tax = tax + (0.1 * 300000) + (0.15 * 400000) + (0.2 * 300000) + (0.25 * (x - 1180000))

	tax = math.ceil(tax)

	if tax > 0 and tax < 2000:
		tax = 2000

	return tax

t = int(sys.stdin.readline())

for i in range(t):
	k = int(sys.stdin.readline())

	print("Case %d: %d"%(i+1, calculate_tax(k)))