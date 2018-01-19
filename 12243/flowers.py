import sys

for line in sys.stdin:
	t = line.strip()
	
	if t == "*":
		break

	x = t.split()

	l = x[0][0]

	l_upper = l.upper()
	l_lower = l.lower()

	flag = True
	for i in x:
		if i[0] != l_upper and i[0] != l_lower:
			flag = False
			break

	if flag:
		print("Y")
	else:
		print("N")
