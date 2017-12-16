import sys
import math 

def get_fastest_time(d, u):
	return d / u

def get_perp_time(d, v, u):
	vert_component = math.sqrt(u*u - v*v)

	return d / vert_component


if __name__ == '__main__':
	t = int(sys.stdin.readline())

	count = 0
	for i in range(t):
		line = sys.stdin.readline().strip().split()
		count = count + 1

		d = int(line[0])
		v = int(line[1])
		u = int(line[2])

		if u == 0 or v == 0 or u <= v:
			print("Case %d: can't determine"%(count))
		else:
			fastest_time = get_fastest_time(d, u)
			perp_time = get_perp_time(d, v, u)
			print("Case %d: %.3f"%(count, perp_time - fastest_time))