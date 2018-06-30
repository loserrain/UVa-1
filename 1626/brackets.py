import sys

def get_compliment(ch):
	if ch == '(':
		return ')'
	elif ch == ')':
		return '('
	elif ch == '[':
		return ']'
	elif ch == ']':
		return '['
	else:
		return None

t = int(sys.stdin.readline())


for i in range(t):
	u = sys.stdin.readline()
	x = sys.stdin.readline().strip()

	s = []
	res = []

	# print(x)

	for c in x:
		if c == '(' or c == '[':
			s.append(c)
			res.append(c)
		else:
			t = get_compliment(c)

			if len(s) != 0:
				k = s.pop()
			else:
				res.append(t)

			while  k != t:
				# print("c, k, t: ", c, k, t)
				res.append(get_compliment(k))
				
				if len(s) == 0:
					res.append(t)
					break

				k = s.pop()
				
			res.append(c)

	for i in s:
		res.append(get_compliment(i))

	print(''.join(res))
	print()
