import sys

def convert_time_to_mins(time):
	x = time.split(":")
	h = int(x[0])
	m = int(x[1])

	mins = (h - 10) * 60 + m

	return mins

count = 0
while True:
	t = sys.stdin.readline()

	if not t:
		break

	count = count + 1

	n = int(t)

	total_minutes = 8 * 60

	x = [0] * total_minutes

	for i in range(n):
		line = sys.stdin.readline().strip().split()

		start_mins = convert_time_to_mins(line[0])
		end_mins = convert_time_to_mins(line[1])

		for j in range(start_mins, end_mins):
			x[j] = 1

	max_len = 0
	curr_len = 0
	max_start = -1
	curr_start = -1
	index = 0
	for i in x:
		if i == 0:
			if curr_start == -1:
				curr_start = index
			curr_len = curr_len + 1
		else:
			if curr_len > max_len:
				max_len = curr_len
				max_start = curr_start
			curr_len = 0
			curr_start = -1

		index = index + 1


	if curr_len > max_len:
		max_len = curr_len
		max_start = curr_start

	hours = max_len // 60
	mins = max_len % 60

	start_hours = max_start // 60 + 10
	start_mins = max_start % 60

	start_time = "%2d:%02d"%(start_hours, start_mins)
	
	if hours != 0:
		res = str(hours) + " hours and " + str(mins) + " minutes"
	else:
		res = str(mins) + " minutes"


	print("Day #%d: the longest nap starts at %s and will last for %s."%(count, start_time, res))