import sys

def calculate_age(curr_date, birth_date):
	curr_date_parts = [int(i) for i in curr_date.split('/')]
	birth_date_parts = [int(i) for i in birth_date.split('/')]

	year_diff = curr_date_parts[2] - birth_date_parts[2]
	month_diff = curr_date_parts[1] - birth_date_parts[1]
	day_diff = curr_date_parts[0] - birth_date_parts[0]

	if day_diff < 0:
		month_diff = month_diff - 1

	if month_diff < 0:
		year_diff = year_diff - 1
		month_diff = month_diff + 12

	return (day_diff, month_diff, year_diff)

if __name__ == '__main__':
	t = int(sys.stdin.readline())

	count = 0
	for i in range(t):
		sys.stdin.readline()

		curr_date = sys.stdin.readline().strip()
		birth_date = sys.stdin.readline().strip()

		count = count + 1
		
		age = calculate_age(curr_date, birth_date)

		if age[2] < 0:
			res = "Invalid birth date"
		elif age[2] > 130:
			res = "Check birth date"
		else:
			res = str(age[2])

		print("Case #%d: %s"%(count, res))