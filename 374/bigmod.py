import sys

def calc_mod(b, p, m):
	if p == 0:
		return 1

	if p % 2 == 0:
		t = calc_mod(b, p // 2, m)
		mod = (t * t) % m
	else:
		t = calc_mod(b, p - 1, m)
		mod = (b * t) % m

	return mod	

if __name__ == '__main__':
	while True:
		x = sys.stdin.readline()
		y = sys.stdin.readline()
		z = sys.stdin.readline()

		b = int(x)
		p = int(y)
		m = int(z)

		res = calc_mod(b, p, m)

		print(res)

		t = sys.stdin.readline()

		if not t:
			break
