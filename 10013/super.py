import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline()
	n = int(sys.stdin.readline())

	num1 = []
	num2 = []

	for j in range(n):
		line = sys.stdin.readline().strip().split()

		num1.append(int(line[0]))
		num2.append(int(line[1]))

	sum_num = []
	carry = 0
	for j in range(n-1, -1, -1):
		x = num1[j] + num2[j] + carry

		sum_num.append(x % 10)
		carry = x // 10

	if carry != 0:
		sum_num.append(carry)

	sum_num.reverse()

	y = [str(k) for k in sum_num]

	num = ''.join(y)

	if i > 0:
		print()

	print(num)
