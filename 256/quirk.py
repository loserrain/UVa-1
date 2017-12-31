import sys

# Incorrect

quirk_nos = {}
for i in [2, 4, 6, 8]:
	lower = 1
	upper = 1
	divisor = 1

	for j in range(i-1):
		lower = lower * 10

	for j in range(i):
		upper = upper * 10


	for j in range(i // 2):
		divisor = divisor * 10

	t = []
	for j in range(lower, upper):
		part_1 = j % divisor
		part_2 = j // divisor

		x = part_1 + part_2
		y = x*x

		if y == j:
			t.append(y) 

	print(t)

	quirk_nos[i] = t

print(quirk_nos)

# for line in sys.stdin:
