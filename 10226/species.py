import sys

t = int(sys.stdin.readline())

line = sys.stdin.readline()

for i in range(t):
	tree_count_map = {}

	while True:
		line = sys.stdin.readline().strip()

		if line == '':
			break

		try:
			tree_count_map[line] = tree_count_map[line] + 1
		except:
			tree_count_map[line] = 1

	total = sum(tree_count_map.values())

	tree_perc_list = sorted([(k, (v / total)*100) for (k, v) in tree_count_map.items()])

	if i != 0:
		print()
		
	for (k, v) in tree_perc_list:
		print("%s %.4f"%(k, v))
