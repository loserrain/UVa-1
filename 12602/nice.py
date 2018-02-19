import sys
import math

def convert_first_part(first_part):
    res = 0
    count = 0
    for i in first_part:
        count = count + 1
        t = abs(65 - ord(i))
        mult = int(math.pow(26, 3 - count))

        res = res + t * mult

    return res

def is_nice(first_part_score, second_part_score):
    x = abs(first_part_score - second_part_score)

    if x <= 100:
        res = "nice"
    else:
        res = "not nice"

    return res

if __name__ == '__main__':
    n = int(sys.stdin.readline())

    for i in range(n):
        t = sys.stdin.readline().strip().split('-')
        f = convert_first_part(t[0])
        s = int(t[1])

        res = is_nice(f, s)

        print(res)
