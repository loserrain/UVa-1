import sys

class Rectangle(object):
	def __init__(self, upper_left_x, upper_left_y, lower_right_x, lower_right_y):
		self.upper_left_x = upper_left_x
		self.upper_left_y = upper_left_y
		self.lower_right_x = lower_right_x
		self.lower_right_y = lower_right_y

	def contains(self, x, y):
		return (x > self.upper_left_x and x < self.lower_right_x) and (y < self.upper_left_y and y > self.lower_right_y)

	def __repr__(self):
		return 'Rectangle(%f, %f, %f, %f)'%(self.upper_left_x, self.upper_left_y, self.lower_right_x, self.lower_right_y)


rects = []
count = 0

for line in sys.stdin:
	x = line.strip().split()
	l = len(x)

	if l == 5:
		a = float(x[1])
		b = float(x[2])
		c = float(x[3])
		d = float(x[4])

		r = Rectangle(a, b, c, d)
		
		rects.append(r)
	elif l == 2:
		a = float(x[0])
		b = float(x[1])

		if a == 9999.9 and b == 9999.9:
			break

		count = count + 1
		t = []
		for (i, rect) in enumerate(rects):
			if rect.contains(a, b):
				t.append(i)

		if len(t) == 0:
			print("Point %d is not contained in any figure"%(count))
		else:
			for i in t:
				print("Point %d is contained in figure %d"%(count, i+1))