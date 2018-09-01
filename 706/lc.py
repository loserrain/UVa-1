import sys

def init_grid(s):
    grid = []
    for i in range(2*s + 3):
        grid.append([' '] * (s+2))

    return grid

def print_1(s):
    grid = init_grid(s)
    for i in range(1, s+1):
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][-1] = '|'

    return grid

def print_2(s):
    grid = init_grid(s)
    for i in [0, s+1, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][0] = '|'

    return grid


def print_3(s):
    grid = init_grid(s)
    for i in [0, s+1, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][-1] = '|'

    return grid

def print_4(s):
    grid = init_grid(s)
    for i in [s+1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][-1] = '|'

    return grid


def print_5(s):
    grid = init_grid(s)
    for i in [0, s+1, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][0] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][-1] = '|'

    return grid

def print_6(s):
    grid = init_grid(s)
    for i in [0, s+1, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][0] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    return grid

def print_7(s):
    grid = init_grid(s)
    for i in [0]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][-1] = '|'

    return grid

def print_8(s):
    grid = init_grid(s)
    for i in [0, s+1, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    return grid

def print_9(s):
    grid = init_grid(s)
    for i in [0, s+1, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][-1] = '|'

    return grid

def print_0(s):
    grid = init_grid(s)
    for i in [0, -1]:
        for j in range(1, s+1):
            grid[i][j] = '-'

    for i in range(1, s+1):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    for i in range(s+2, 2*s + 2):
        grid[i][0] = '|'
        grid[i][-1] = '|'

    return grid

def get_repr(n, s):
    if n == 1:
        return print_1(s)
    elif n == 2:
        return print_2(s)
    elif n == 3:
        return print_3(s)
    elif n == 4:
        return print_4(s)
    elif n == 5:
        return print_5(s)
    elif n == 6:
        return print_6(s)
    elif n == 7:
        return print_7(s)
    elif n == 8:
        return print_8(s)
    elif n == 9:
        return print_9(s)
    elif n == 0:
        return print_0(s)

if __name__ == '__main__':
    # count = 0
    for line in sys.stdin:
        t = line.strip().split()

        if t[0] == "0" and t[1] == "0":
            break

        # if count > 0:
        #     print()
        #
        s = int(t[0])
        n = [int(i) for i in t[1]]

        # print(s, n)

        reprs = [get_repr(i, s) for i in n]

        # print(reprs)
        for i in range(2*s+3):
            temp = []
            for j in range(len(n)):
                temp.append(''.join(reprs[j][i]))

            row = ' '.join(temp)
            print(row)

        print()
        
        # count = count + 1
        # one = print_1(s)
        # for i in one:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # two = print_2(s)
        # for i in two:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # three = print_3(s)
        # for i in three:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # four = print_4(s)
        # for i in four:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # five = print_5(s)
        # for i in five:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # six = print_6(s)
        # for i in six:
        #     t = ''.join(i)
        #     print(t)
        #
        #
        # print()
        #
        # seven = print_7(s)
        # for i in seven:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # eight = print_8(s)
        # for i in eight:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # nine = print_9(s)
        # for i in nine:
        #     t = ''.join(i)
        #     print(t)
        #
        # print()
        #
        # zero = print_0(s)
        # for i in zero:
        #     t = ''.join(i)
        #     print(t)
