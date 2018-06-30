import sys

while True:
  line = sys.stdin.readline().strip()

  if line == '':
    break

  x = line.split()

  n = int(x[0])
  t = int(x[1])

  d = 0
  s = 0
  for i in range(n):
    line = sys.stdin.readline().strip()

    x = line.split()

    a = int(x[0])
    b = int(x[1])

    d = d + a
    s = s + b


