import sys

t = int(sys.stdin.readline())

for i in range(t):
    line = sys.stdin.readline().strip().split()

    x = line[0]
    y = line[1]


    l1 = len(x)
    l2 = len(y)

    if l1 > l2:
        y = y + '0' * (l1 - l2)
    else:
        x = x + '0' * (l2 - l1)

    num1 = [int(i) for i in x]
    num2 = [int(i) for i in y]

    l = max([l1, l2])
    carry = 0
    res = []

    for i in range(l):
        temp = num1[i] + num2[i] + carry
        res.append(temp % 10)
        carry = temp // 10

    if carry != 0:
        res.append(carry)

    # print(num1, num2)
    # print(res)

    # Remove trailing zeroes
    i = 0
    while True:
        if res[i] == 0:
            i = i + 1
            continue
        else:
            break

    res = res[i:]
    # print("res:", res)

    if len(res) == 0:
        res = ['0']

    a = [str(i) for i in res]
    ans = ''.join(a)

    print(ans)
