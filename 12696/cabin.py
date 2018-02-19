import sys


LENGTH_LIM = 56
WIDTH_LIM = 45
DEPTH_LIM = 25

SUM_DIM_LIM = 125
WEIGHT_LIM = 7


t = int(sys.stdin.readline())

total = 0

for i in range(t):
	line = sys.stdin.readline().strip().split()

	l = float(line[0])
	w = float(line[1])
	d = float(line[2])
	
	weight = float(line[3])

	sum_dim = l + w + d

	if ((l <= LENGTH_LIM and w <= WIDTH_LIM and d <= DEPTH_LIM) or sum_dim <= SUM_DIM_LIM) and weight <= WEIGHT_LIM:
		print(1)
		total = total + 1
	else:
		print(0)

print(total)
