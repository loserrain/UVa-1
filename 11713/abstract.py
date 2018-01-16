import sys

n = int(sys.stdin.readline())

vowels = set(['a', 'e', 'i', 'o', 'u'])

for i in range(n):
	name1 = sys.stdin.readline().strip()
	name2 = sys.stdin.readline().strip()

	l1 = len(name1)
	l2 = len(name2)

	if l1 != l2:
		print("No")
		continue

	index = 0

	while index < l1:
		if name1[index] == name2[index]:
			index = index + 1
			continue
		elif name1[index] in vowels and name2[index] in vowels:
			index = index + 1
			continue
		else:
			break

	if index != l1:
		print("No")
	else:
		print("Yes")
