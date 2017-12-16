import sys

def is_leap_year(n):
	return ((n%4 == 0) and (n%100 != 0)) or (n % 400 == 0)

def is_huluculu(n):
	return n % 15 == 0

def is_bulukulu(n):
	return n % 55 == 0 and is_leap_year(n)

count = 0
for line in sys.stdin:
	t = int(line)

	if count != 0:
		print()
	count = 1
	
	props = []

	if is_leap_year(t):
		props.append("This is leap year.")

	if is_huluculu(t):
		props.append("This is huluculu festival year.")

	if is_bulukulu(t):
		props.append("This is bulukulu festival year.")


	if len(props) == 0:
		print("This is an ordinary year.")
	else:
		for i in props:
			print(i)
