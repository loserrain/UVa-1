import sys

def convert_one_run(n, flag = False):
	t = []

	if flag == False:
		x = n % 100
		if x != 0:
			t.append(str(x))
		n = n // 100

		if n == 0:
			return (n, t)

	x = n % 10
	if x != 0:
		t.append('shata')
		t.append(str(x))
	n = n // 10

	if n == 0:
		return (n, t)

	x = n % 100
	if x != 0:
		t.append('hajar')
		t.append(str(x))
	n = n // 100

	if n == 0:
		return (n, t)

	x = n % 100
	if x != 0:
		t.append('lakh')
		t.append(str(x))
	n = n // 100

	if n == 0:
		return (n, t)

	x = n % 100
	if x != 0:
		t.append('kuti')
		t.append(str(x))
	n = n // 100

	if n == 0:
		return (n, t)

	return (n, t)


def convert_to_string(n):
	if n == 0:
		return ['0']

	u = convert_one_run(n)

	if u[0] != 0:
		return u[1] + convert_one_run(u[0], True)[1]
	else:
		return u[1]


if __name__ == '__main__':
	count = 0
	for line in sys.stdin:
		count = count + 1
		n = int(line)

		t = convert_to_string(n)
		t.reverse()

		output = ' '.join(t)

		print("%4d. %s"%(count, output))