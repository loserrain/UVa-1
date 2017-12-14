import sys

if __name__ == '__main__':
	while True:
		n = int(sys.stdin.readline())

		if n == 0:
			break

		l = int(sys.stdin.readline())

		graph = {}

		for i in range(l):
			t = sys.stdin.readline()
			x = t.strip().split()

			a = int(x[0])
			b = int(x[1])

			try:
				graph[a].append(b)
			except:
				graph[a] = []
				graph[a].append(b)

			try:
				graph[b].append(a)
			except:
				graph[b] = []
				graph[b].append(a)

		colors = [-1] * n
		print(graph)
		print(colors)

		for (k, v) in graph.items():
			print(k)
			print(v)