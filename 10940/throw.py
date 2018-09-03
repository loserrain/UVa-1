import sys
import math

for line in sys.stdin:
    n = int(line)

    if n == 0:
        break

    t = int(math.log(n, 2))
    s = int(math.pow(2, t))

    d = n - s

    if d == 0:
        res = n
    else:
        res = 2 * d

    print(res)
