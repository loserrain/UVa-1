import sys

block_matrix = []
location = []

def move_onto(a, b):
	loc_a = location[a]
	x = loc_a[0]
	y = loc_a[1]

	z = block_matrix[x].pop()

	while z != a:
		t = block_matrix[x][i]
		if t != a:
			block_matrix[t].append(t)
		
		z = block_matrix[x].pop()

	loc_b = location[b]
	x = loc_b[0]
	y = loc_b[1]


	print("bm: ", block_matrix[x])
	z = block_matrix[x].pop()

	print("bm: ", block_matrix[x])
	while z != b:
		t = block_matrix[x][i]
		if t != b:
			block_matrix[t].append(t)
		
		z = block_matrix[x].pop()

	block_matrix[x].append(b)
	block_matrix[x].append(a)


def move_over(a, b):
	loc_a = location[a]
	x = loc_a[0]
	y = loc_a[1]

	print("bm: ", block_matrix[x])
	z = block_matrix[x].pop()

	print(z)

	while z != a:
		t = block_matrix[x][i]
		if t != a:
			block_matrix[t].append(t)
		
		z = block_matrix[x].pop()

	loc_b = location[b]
	x = loc_b[0]
	y = loc_b[1]

	block_matrix[x].append(a)
	

n = int(sys.stdin.readline())

for i in range(n):
	block_matrix.append([i])
	location.append((i, 0))

print(block_matrix)
print(location)

while True:
	cmd = sys.stdin.readline().strip()

	if cmd == 'quit':
		break

	print(cmd)

	parts = cmd.split()
	a = int(parts[1])
	b = int(parts[3])

	if parts[0] == 'move' and parts[2] == 'onto':
		move_onto(a, b)
	elif parts[0] == 'move' and parts[2] == 'over':
		move_over(a, b)

	print("Block:", block_matrix)
	print("Location:", location)

