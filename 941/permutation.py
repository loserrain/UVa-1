s = raw_input()
n = int(raw_input())

l = len(s)

t = list(s)
t = sorted(t)

print t

f = []
f.append(1)

for i in range(1, 21):
	f.append(i * f[i-1])

print f

for i in range(l):
	p = f[l - i - 1]

	q = n / p
	n = n % p

	print 'p:', p
	print 'q:', q
	print 'n:', n

	if q == 0:
		continue

	j = i + q

	k = t[j]

	while j != i:
		t[j] = t[j-1]
		j = j - 1

		print 'k, t: ', k, t

	t[i]= k

print "Result: ", ''.join(t)
