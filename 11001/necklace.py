import sys
import math

for line in sys.stdin:
	t = line.strip().split()

	v = int(t[0])
	v0 = int(t[1])

	if v == 0 and v0 == 0:
		break

	if v == v0:
		print(0)
		continue

	n_max = v // v0

	lens = []
	for i in range(1, n_max+1):
		v_one = v / i

		d = 0.3 * math.sqrt(v_one - v0)
		length = d * i

		lens.append(round(length, 6))

	# print(lens)

	t = len(lens)

	if t == 0:
		max_bead = 0
	else:
		x = max(lens)

		# print("x: ", x)

		max_bead = -1
		for i in range(t):
			if x == lens[i]:
				# print("x, len[i]", x, lens[i], i)
				if max_bead == -1:
					max_bead = i+1
				else:
					max_bead = 0
					break

	print(max_bead)
