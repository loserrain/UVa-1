import sys
import math

root_three = math.sqrt(3)

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	l1 = 0
	l2 = 0
	b1 = 0
	b2 = 0
	area_houses = 0

	count_c = 0
	corners = []
	for j in range(n):
		house = sys.stdin.readline().split()

		house_type = house[0]
		size = int(house[1])

		if count_c == 0:
			init_c = size

		if house_type == 'C' or house_type == 'S':
			area_houses = area_houses + size * size

		if house_type == 'T':
			area_houses = area_houses + (root_three / 4) * size * size

		if count_c == 1:
			l1 = l1 + size

		if count_c == 2:
			b1 = b1 + size

		if count_c == 3:
			l2 = l2 + size

		if count_c == 4:
			b2 = b2 + size
		
		if house_type == 'C':
			count_c = count_c + 1
			corners.append(size)

	try:
		b1 = b1 + corners[1]
	except:
		pass

	try:
		l2 = l2 + corners[2]
	except:
		pass
	try:
		b2 = b2 + corners[3]
	except:
		pass

	l = max(l1, l2)
	b = max(b1, b2)

	area = (l*b - area_houses)

	print("%.4f"%(area))
	