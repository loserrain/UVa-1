import sys

# Runtime Error

coords = []
min_l = 10001
max_r = 0

hs = [0]*50

for line in sys.stdin:
	t = [int(i) for i in line.strip().split()]
	coords.append(t)

	if t[0] < min_l:
		min_l = t[0]

	if t[2] > max_r:
		max_r = t[2]

	for i in range(t[0], t[2]):
		if t[1] > hs[i]:
			hs[i] = t[1]

res = [(min_l, hs[min_l])]
for i in range(min_l+1, len(hs)):
	if hs[i] != hs[i-1]:
		res.append((i, hs[i]))

s = []
for i in res:
	s.append(str(i[0]) + ' ' + str(i[1]))

x = ' '.join(s)

print(x)

# print(hs)