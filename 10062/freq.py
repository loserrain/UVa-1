import sys

class Freq(object):
	def __init__(self, key, value):
		self.key = key
		self.value = value

	def __lt__(self, other):
		print(self)
		print(other)
		if self.value < other.value:
			return -1
		elif self.value > other.value:
			return 1
		else:
			if self.key < other.key:
				return 1
			elif self.key > other.key:
				return -1
			else:
				return 0

	def __str__(self):
		return str(self.key) + " " + str(self.value)

for line in sys.stdin:
	t = line.strip()

	char_map = {}

	for i in t:
		try:
			char_map[i] = char_map[i] + 1
		except:
			char_map[i] = 1

	char_items = sorted([Freq(k, v) for (k, v) in char_map.items()])

	print()
	for char_item in char_items:
		print(char_item)

	print()

