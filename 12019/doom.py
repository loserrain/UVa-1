import sys

days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']

week_counter = 5
T = []

for i in days:
	t = []
	for j in range(i):
		t.append(week[week_counter])
		week_counter = week_counter + 1

		if week_counter == 7:
			week_counter = 0

	T.append(t)


t = int(sys.stdin.readline())
for i in range(t):
	line = sys.stdin.readline().strip().split()

	x = int(line[0])
	y = int(line[1])

	print(T[x-1][y-1])
