import sys

# Time limit exceeded
while True:
    t = sys.stdin.readline()

    if t == '':
        break

    w = int(t)

    t = sys.stdin.readline()
    n = int(t)

    area = 0
    for i in range(n):
        t = sys.stdin.readline().strip().split()

        x = int(t[0])
        y = int(t[1])

        area = area + x * y

    l = area // w

    print(l)
