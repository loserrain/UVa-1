import sys
from operator import itemgetter

#ACCEPTED

count = 0

for line in sys.stdin:
	t = line

	if count != 0:
		print()

	count = count + 1

	char_map = {}

	for i in t:
		j = ord(i)

		if j >= 32 and j <= 128:
			try:
				char_map[j] = char_map[j] + 1
			except:
				char_map[j] = 1


	char_items = sorted(char_map.items(), reverse = True)
	char_items = sorted(char_items, key = lambda x: x[1])

	for char_item in char_items:
		print(char_item[0], char_item[1])
