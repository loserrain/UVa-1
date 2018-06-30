import sys

n = int(sys.stdin.readline())

block_matrix = []
location = []

for i in range(n):
	block_matrix.append([i])
	location.append(i)

while True:
	cmd = sys.stdin.readline().strip()

	print(cmd)
	if cmd == 'quit':
		break

	parts = cmd.split()
	print(parts)
	a = int(parts[1])
	b = int(parts[3])

			
	if parts[0] == 'move':
		if parts[2] == 'onto':
			for i in block_matrix[a]:
				if i != a:
					block_matrix[i].append(i)
					location[i] = i

			block_matrix[a] = []
			location[a] = a

			for i in block_matrix[b]:
				if i != b:
					block_matrix[i].append(i)
			
			block_matrix[b] = []
			block_matrix[b].append(b)
			location[a] = 
			block_matrix[b].append(a)
		else:
			for i in block_matrix[a]:
				if i != a:
					block_matrix[i].append(i)

			block_matrix[a] = [a]
			block_matrix[b].append(a)
	else:
		if parts[2] == 'onto':
			for i in block_matrix[b]:
				if i != b:
					block_matrix[i].append(i)
			block_matrix[b] = []
			block_matrix[b].append(b)

			block_matrix[b].extend(block_matrix[a])
			block_matrix[a] = []
		else:
			block_matrix[b].extend(block_matrix[a])
			block_matrix[a] = []

	print("block: ", block_matrix)
print(block_matrix)