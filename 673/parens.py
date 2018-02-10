import sys

# Accepted

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip()

	flag = True

	t = []
	for c in line:
		if c == '(' or c == '[':
			t.append(c)
		elif c == ')' or c == ']':
			if len(t) == 0:
				flag = False
				break
			else:
				x = t.pop()

				if (c == ')' and x != '(') or (c == ']' and x != '['):
					flag = False
					break

	if len(t) != 0:
		flag = False

	if flag == False:
		print("No")
	else:
		print("Yes")