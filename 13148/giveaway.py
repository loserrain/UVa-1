import sys
import math

def is_square(n):
	s = int(math.sqrt(n))

	if s * s == n:
		return True

	return False

def is_cube(n):
	c = int(round(math.pow(n, 1.0/3)))

	if c * c * c == n:
		return True

	return False

if __name__ == '__main__':
	for line in sys.stdin:
		t = int(line)

		if t == 0:
			break

		if is_square(t) and is_cube(t):
			print("Special")
		else:
			print("Ordinary")