import sys

t = int(sys.stdin.readline())

def sum_digits(n):
	s = 0

	while n > 0:
		s = s + n % 10
		n = n // 10

	return s

for i in range(t):
	line = sys.stdin.readline()

	odd_digits = []
	even_digits = []
	count = 0
	for i in line:
		if i >= '0' and i <= '9':
			count = count + 1

			if count % 2 == 0:
				even_digits.append(int(i))
			else:
				odd_digits.append(int(i))

	odd_digits_double = list(map(lambda x: x*2, odd_digits))
	odd_digits_double_sum = sum(list(map(lambda x: sum_digits(x), odd_digits_double)))
	even_digits_sum = sum(even_digits)

	total = odd_digits_double_sum + even_digits_sum

	if total % 10 == 0:
		print("Valid")
	else:
		print("Invalid")
