import sys

n = int(sys.stdin.readline())

for i in range(n):
    r = int(sys.stdin.readline())

    y1 = (3 * r) // 2
    y2 = -y1

    x1 = -(9 * r) // 4
    x2 = (11 * r) // 4

    print("Case %d:"%(i+1))

    print(x1, y1)
    print(x2, y1)
    print(x2, y2)
    print(x1, y2)
