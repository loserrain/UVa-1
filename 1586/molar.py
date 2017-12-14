import sys
import re

base_mass = {
	'C': 12.01,
	'H': 1.008,
	'O': 16.00,
	'N': 14.01
}

t = sys.stdin.readline()

n = int(t)

for i in range(n):
	mass = 0
	x = sys.stdin.readline().strip()

	pairs = re.findall(r'[A-Z]\d*', x)

	for pair in pairs:
		if len(pair) == 1:
			mass = mass + base_mass[pair]
		else:
			symbol = pair[0]
			weight = int(pair[1:])

			mass = mass + weight * base_mass[symbol]

	print('%.3f'%(mass))