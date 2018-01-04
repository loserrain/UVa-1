import sys

while True:
	line = sys.stdin.readline()

	n = int(line)

	if n == 0:
		break

	incoming_count_map = {}
	outgoing_map_count = {}

	for i in range(n):
		line = sys.stdin.readline()
		t = line.strip().split()

		a = int(t[0])
		b = int(t[1])

		try:
			outgoing_map_count[a] = outgoing_map_count[a] + 1
		except:
			outgoing_map_count[a] = 1

		try:
			incoming_count_map[b] = incoming_count_map[b] + 1
		except:
			incoming_count_map[b] = 1

	flag = True

	for (k, v) in incoming_count_map.items():
		try:	
			if outgoing_map_count[k] != v:
				flag = False
				break
		except:
			flag = False
			break


	for (k, v) in outgoing_map_count.items():
		try:	
			if incoming_count_map[k] != v:
				flag = False
				break
		except:
			flag = False
			break
			
	if flag:
		print("YES")
	else:
		print("NO")
