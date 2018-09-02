import sys

while True:
    line = sys.stdin.readline().strip().split()

    # print("line:", line)

    n = int(line[0])
    if len(line) > 1:
        m = int(line[1])
    else:
        m = int(sys.stdin.readline())

    if n == 0 and m == 0:
        break

    fact1 = {}
    fact2 = {}

    for i in range(2, 10):
        fact1[i] = 0
        fact2[i] = 0

    line = sys.stdin.readline().strip().split()
    ns = [int(i) for i in line]
    # print(line)

    line = sys.stdin.readline().strip().split()
    # print(line)
    ms = [int(i) for i in line]

    for i in ns:
        for j in range(2, i+1):
            fact1[j] += 1

    for i in ms:
        for j in range(2, i+1):
            fact2[j] += 1

    fact1[2] = fact1[2] + 2*fact1[4] + fact1[6] + 3*fact1[8]
    fact1[3] = fact1[3] + fact1[6] + 2*fact1[9]
    fact1[4] = 0
    fact1[6] = 0
    fact1[8] = 0
    fact1[9] = 0

    fact2[2] = fact2[2] + 2*fact2[4] + fact2[6] + 3*fact2[8]
    fact2[3] = fact2[3] + fact2[6] + 2*fact2[9]
    fact2[4] = 0
    fact2[6] = 0
    fact2[8] = 0
    fact2[9] = 0

    flag = True
    for i in range(2, 10):
        if fact1[i] != fact2[i]:
            flag = False
            break

    if flag:
        print("YES")
    else:
        print("NO")
