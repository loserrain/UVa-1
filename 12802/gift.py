import sys
import math 

def is_palindrome(n):
	t = n
	rev = 0

	while n != 0:
		rev = rev * 10 + (n % 10)
		n = n // 10

	return t == rev

def is_prime(n):
	if n <= 3:
		return True

	x = int(math.sqrt(n) + 1)

	flag = True
	for i in range(2, x):
		if (n%i) == 0:
			flag = False
			break

	return flag

for line in sys.stdin:
	n = int(line)

	print(2 * n)

	if is_palindrome(n) and is_prime(n):
		break
