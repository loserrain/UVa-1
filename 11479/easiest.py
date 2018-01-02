import sys

def is_invalid(a, b, c):
	x = a + b
	y = b + c
	z = c + a

	return a < 0 or b < 0 or c < 0 or x <= c or y <= a or z <= b

def is_equilateral(a, b, c):
	return a == b and b == c

def is_isoceles(a, b, c):
	return a == b or b == c or c == a

if __name__ == '__main__':
	t = int(sys.stdin.readline())

	for i in range(t):
		line = sys.stdin.readline()
		x = line.split()

		a = int(x[0])
		b = int(x[1])
		c = int(x[2])

		if is_invalid(a, b, c):
			res = "Invalid"
		elif is_equilateral(a, b, c):
			res = "Equilateral"
		elif is_isoceles(a, b, c):
			res = "Isosceles"
		else:
			res = "Scalene"

		print("Case %d: %s"%(i+1, res))