import sys

while True:
    t = sys.stdin.readline()

    if t == '':
        break

    x = [0, 0, 0]
    y = [0, 0, 0]
    frost = [0, 0, 0]

    n = int(t)

    t = sys.stdin.readline()
    A = [int(i) for i in t.strip().split()]

    t = sys.stdin.readline()
    B = [int(i) for i in t.strip().split()]

    for i in range(n):
        x[i%3] += A[i]
        y[i%3] += B[i]

    for i in range(3):
        for j in range(3):
            frost[(i+j) % 3] += x[i] * y[j]

    print(frost[1], frost[2], frost[0])
