import sys
import math

def get_largest_price_decline(p, a, b, c, d, n):
	largest_seen_till_now = 0.0
	larget_price_decline_till_now = 0.0

	for i in range(1, n+1):
		term = p * (math.sin(a * i + b) + math.cos(c * i + d) + 2)

		if term > largest_seen_till_now:
			largest_seen_till_now = term
		else:
			if (largest_seen_till_now - term) > larget_price_decline_till_now:
				larget_price_decline_till_now = largest_seen_till_now - term

	return larget_price_decline_till_now


if __name__ == '__main__':
	for line in sys.stdin:
		s = line.strip().split()

		p = int(s[0])
		a = int(s[1])
		b = int(s[2])
		c = int(s[3])
		d = int(s[4])
		n = int(s[5])

		res = get_largest_price_decline(p, a, b, c, d, n)

		print(res)