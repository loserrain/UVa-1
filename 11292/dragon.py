import sys

while True:
	line = sys.stdin.readline().strip().split()

	d = int(line[0])
	k = int(line[1])

	if d == 0 and k == 0:
		break

	ds = []
	for i in range(d):
		t = int(sys.stdin.readline())
		ds.append(t)

	ks = []
	for i in range(k):
		t = int(sys.stdin.readline())
		ks.append(t)


	if k < d:
		print('Loowater is doomed!')
		continue

	ds.sort()
	ks.sort()

	i = 0
	j = 0
	cost = 0
	while i < k and j < d:
		if ks[i] >= ds[j]:
			cost = cost + ks[i]
			i = i + 1
			j = j + 1
		else:
			i = i + 1

	if j < d:
		res = 'Loowater is doomed!'
	else:
		res = cost

	print(res)
