import sys
import math

def quadratic(a, b, c):
    D = b*b - 4*a*c
    res = (-b + math.sqrt(D)) / (2 * a)

    return res

def sum(n):
    return (n * (n + 1)) // 2

for line in sys.stdin:
    t = line.strip().split()

    s = int(t[0])
    d = int(t[1])

    # n(n+1)/2 - (s-1)(s-2) / 2 = d
    t = (d + sum(s-1)) * 2
    res = quadratic(1, 1, -t)
    ans = int(math.ceil(res))

    print(ans)
