import sys

case_count = 0

while True:
	line = sys.stdin.readline().strip().split()

	b = int(line[0])
	s = int(line[1])

	if b == 0 and s == 0:
		break

	case_count = case_count + 1

	min_age = 100
	for i in range(b):
		t = int(sys.stdin.readline())

		if t < min_age:
			min_age = t

	for i in range(s):
		t = int(sys.stdin.readline())

	if b <= s:
		res = '0'
	else:
		res = '%d %d'%(b-s, min_age)

	print("Case %d: %s"%(case_count, res))
