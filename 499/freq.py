import sys

for line in sys.stdin:
	freq = {}

	for i in line:
		if i.isalpha():
			try:
				freq[i] = freq[i] + 1
			except:
				freq[i] = 1

	freq_items = sorted(freq.items())
	max_val = max(freq.values())

	chars = []

	for i in freq_items:
		if i[1] == max_val:
			chars.append(i[0])

	print(''.join(chars), max_val)
