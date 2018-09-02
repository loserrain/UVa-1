import sys
import math

for line in sys.stdin:
    t = line.strip().split()

    fast = int(t[0])
    slow = int(t[1])

    diff = slow - fast

    lap = 1 + math.ceil(fast / diff)

    print(int(lap))
