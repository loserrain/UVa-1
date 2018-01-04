import sys

t = int(sys.stdin.readline())
line = sys.stdin.readline()

for i in range(t):
	n = int(sys.stdin.readline())

	if i != 0:
		print()

	jobs = []

	for j in range(n):
		line = sys.stdin.readline().strip().split()

		days = int(line[0])
		fine = int(line[1])

		x = fine / days

		jobs.append((j+1, x))

	jobs = sorted(jobs, key=lambda x: x[1], reverse=True)

	job_ids = map(lambda x: str(x[0]), jobs)

	print(' '.join(job_ids))

	line = sys.stdin.readline()
