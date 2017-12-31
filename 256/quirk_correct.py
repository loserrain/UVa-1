import sys

ans = [
	[0, 1, 81], 
	[0, 1, 2025, 3025, 9801], 
	[0, 1, 88209, 494209, 998001], 
	[0, 1, 4941729, 7441984, 24502500, 25502500, 52881984, 60481729, 99980001]
]


for line in sys.stdin:
	x = int(line)

	if x == 2:
		for i in ans[0]:
			print("%0.2d"%(i))
	elif x == 4:
		for i in ans[1]:
			print("%0.4d"%(i))
	elif x == 6:
		for i in ans[2]:
			print("%0.6d"%(i))
	elif x == 8:
		for i in ans[3]:
			print("%0.8d"%(i))
