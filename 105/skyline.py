import sys

# Time limit exceeded error

coords = []
min_l = 10001
max_r = 0

for line in sys.stdin:
	t = [int(i) for i in line.strip().split()]
	coords.append(t)

	if t[0] < min_l:
		min_l = t[0]

	if t[2] > max_r:
		max_r = t[2]

hs = []
for i in range(min_l, max_r+1):
	max_h = 0
	for j in coords:
		if i >= j[0] and i < j[2]:
			if j[1] > max_h:
				max_h = j[1]

	hs.append(max_h)

res = [(0, hs[0])]

for i in range(1, len(hs)):
	if hs[i] != hs[i-1]:
		res.append((i, hs[i]))

res = [(k+min_l, v) for (k,v) in res]

s = []
for i in res:
	s.append(str(i[0]) + ' ' + str(i[1]))

x = ' '.join(s)

print(x)
