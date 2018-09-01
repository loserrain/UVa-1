import sys

# Time Exceeded
while True:
    t = sys.stdin.readline()

    if t == '':
        break

    n = int(t)

    t = sys.stdin.readline()
    A = [int(i) for i in t.strip().split()]

    t = sys.stdin.readline()
    B = [int(i) for i in t.strip().split()]

    y = 0
    p = 0
    w = 0

    for i in range(n):
        for j in range(n):
            area = A[i] * B[j]

            color = (i+j+2) % 3

            if color == 0:
                y = y + area
            elif color == 1:
                p = p + area
            else:
                w = w + area

    print(y, p, w)
