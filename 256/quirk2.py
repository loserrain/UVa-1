import sys

nos = []
for i in [10, 100, 1000, 10000]:
	t = []
	for j in range(i):
		for k in range(i):
			z = i*j + k

			x = j + k
			y = x*x

			if y == z:
				t.append(z)

	nos.append(t)

print(nos)

