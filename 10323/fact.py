import sys

min_fact = 0
max_fact = 0

fact = [1, 1]

i = 2
while True:
	fact_i = i * fact[i-1]
	fact.append(fact_i)

	if fact_i > 10000:
		min_fact = i
		i = i + 1
		break

	i = i + 1

while True:
	fact_i = i * fact[i-1]
	fact.append(fact_i)

	if fact_i > 6227020800:
		max_fact = i 
		break

	i = i + 1

for line in sys.stdin:
	t = int(line)

	if t < 0 and t % 2 == 0:
			print("Underflow!")
	elif t < min_fact and t >=0:
		print("Underflow!")
	elif t >= min_fact and t < max_fact:		
		print(fact[t])
	else:
		print("Overflow!")
