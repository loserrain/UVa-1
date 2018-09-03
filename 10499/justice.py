import sys

for line in sys.stdin:
    n = int(line)

    if n < 0:
        break

    if n == 1:
        profit = 0
    else:
        profit = int((n / 4) * 100)

    print(str(profit) + "%")
