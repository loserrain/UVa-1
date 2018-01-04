import sys

def get_parity(n):
	s = 0
	nums = []
	while n != 0:
		x = n % 2
		s = s + x
		nums.append(x)
		n = n // 2

	nums.reverse()

	binary_num = ''.join([str(i) for i in nums])

	return s, binary_num

for line in sys.stdin:
	t = int(line)

	if t == 0:
		break

	(res, num) = get_parity(t)

	print("The parity of %s is %d (mod 2)."%(num, res))
