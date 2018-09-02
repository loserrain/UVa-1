import sys

def sum_till_n(n):
    return (n * (n + 1)) // 2

t = int(sys.stdin.readline())

for i in range(t):
    line = sys.stdin.readline().strip().split()

    n = int(line[0])
    k = int(line[1])
    x = int(line[2])

    sum_n = sum_till_n(n)
    sum_k_minus_1 = sum_till_n(k-1)
    sum_removed = k*x + sum_k_minus_1

    sum_left = sum_n - sum_removed

    print("Case %d: %d"%(i+1, sum_left))
