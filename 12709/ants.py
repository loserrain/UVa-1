import sys

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	ants_size = []
	for i in range(n):
		line = sys.stdin.readline()

		x = [int(i) for i in line.strip().split()]

		ants_size.append(x)

	max_h = 0
	max_h_pos = 0
	for i in range(n):
		if ants_size[i][2] > max_h:
			max_h = ants_size[i][2]
			max_h_pos = i

	filtered_size = []
	filtered_vols = []
	for i in ants_size:
		if i[2] == max_h:
			filtered_size.append(i)
			filtered_vols.append(i[0]*i[1]*i[2])

	print(max(filtered_vols))
