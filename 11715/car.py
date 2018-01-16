import sys
import math

count = 0
for line in sys.stdin:
	t = line.strip().split()

	if t[0] == '0':
		break
	count = count + 1

	if t[0] == '1':
		u = float(t[1])
		v = float(t[2])
		t = float(t[3])

		a = (v - u) / t
		s = (v*v - u*u) / (2*a)

		print("Case %d: %.3f %.3f"%(count, s, a))
	elif t[0] == '2':
		u = float(t[1])
		v = float(t[2])
		a = float(t[3])

		t = (v - u) / a
		s = (v*v - u*u) / (2*a)

		print("Case %d: %.3f %.3f"%(count, s, t))		
	elif t[0] == '3':
		u = float(t[1])
		a = float(t[2])
		s = float(t[3])

		v = math.sqrt(u*u + 2*a*s)
		t = (v - u) / a

		print("Case %d: %.3f %.3f"%(count, v, t))	
	elif t[0] == '4':
		v = float(t[1])
		a = float(t[2])
		s = float(t[3])

		u = math.sqrt(v*v - 2*a*s)
		t = (v - u) / a

		print("Case %d: %.3f %.3f"%(count, u, t))