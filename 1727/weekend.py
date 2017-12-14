import sys

months = {
	'JAN': 31,
	'FEB': 28,
	'MAR': 31,
	'APR': 30,
	'MAY': 31,
	'JUN': 30,
	'JUL': 31,
	'AUG': 31,
	'SEP': 30,
	'OCT': 31,
	'NOV': 30,
	'DEC': 31
}

days = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']

def get_first_day_index(first_day):
	day_index = 0

	for i in days:
		if first_day == i:
			break
		day_index = day_index + 1

	return day_index


def get_weekend_days(month, first_day):
	days_count = months[month]
	day_index = get_first_day_index(first_day)

	x = []
	i = 0

	while i < days_count:
		for j in days[day_index:]:
			i = i + 1

			if i > days_count:
				break

			x.append(j)

		day_index = 0

	count = 0

	for i in x:
		if i == 'FRI' or i == 'SAT':
			count = count + 1

	return count


if __name__ == '__main__':
	t = int(sys.stdin.readline())

	for i in range(t):
		line = sys.stdin.readline()

		s = line.strip().split()

		count = get_weekend_days(s[0], s[1])

		print(count)


