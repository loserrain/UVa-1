import sys

def count_bangla_wins(res):
	b = 0
	for i in res:
		if i == 'B':
			b = b + 1

	return b


def count_www_wins(res):
	w = 0
	for i in res:
		if i == 'W':
			w = w + 1

	return w


def count_abandoned(res):
	a = 0
	for i in res:
		if i == 'A':
			a = a + 1

	return a


def count_draws(res):
	t = 0
	for i in res:
		if i == 'T':
			t = t + 1

	return t

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())
	res = sys.stdin.readline().strip()

	b = count_bangla_wins(res)
	w = count_www_wins(res)
	a = count_abandoned(res)
	d = count_draws(res)

	# print(res)

	if n == a:
		r = 'ABANDONED'
	elif n == b + a:
		r = 'BANGLAWASH'
	elif n == w + a:
		r = 'WHITEWASH'
	elif b == w and n == b + w + d + a:
		r = 'DRAW %d %d'%(b, d)
	elif b > w:
		r = 'BANGLADESH %d - %d'%(b, w)
	elif b < w:
		r = 'WWW %d - %d'%(w, b)

	print("Case %d:"%(i+1), r)
