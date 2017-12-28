import sys

def is_leap_year(year):
	if year % 400 == 0:
		return True
	elif year % 100 == 0:
		return False
	elif year % 4 == 0:
		return True

	return False

def count_leap_birthdays(year, qy):
	count = 0
	t = year + 4

	while t <= qy:
		if is_leap_year(t):
			count = count + 1
		t = t + 4

	return count


if __name__ == '__main__':
	t = int(sys.stdin.readline())

	for i in range(t):
		line = sys.stdin.readline()
		x = line.strip().split()

		day = int(x[0])
		month = int(x[1])
		year = int(x[2])
		qy = int(x[3])
		
		leap_year_flag = (day == 29 and month == 2)

		if leap_year_flag:
			count = count_leap_birthdays(year, qy)
		else:
			count = qy - year

		print("Case %d: %d"%(i+1, count))

