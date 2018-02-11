import sys

mappings = {
	'1': '.,?"',
	'2': 'abc',
	'3': 'def',
	'4': 'ghi',
	'5': 'jkl',
	'6': 'mno',
	'7': 'pqrs',
	'8': 'tuv',
	'9': 'wxyz',
	'0': ' ',	
}

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	ns = sys.stdin.readline().strip().split()
	
	line = sys.stdin.readline().strip().split()
	ps = [int(x) for x in line]

	res = []

	for j in range(n):
		t = ns[j]
		u = ps[j] - 1

		v = mappings[t][u]
		res.append(v)

	print(''.join(res))
