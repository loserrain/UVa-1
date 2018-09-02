import sys

while True:
    line = sys.stdin.readline().strip().split()

    r = int(line[0])
    c = int(line[1])

    if r == 0 and c == 0:
        break

    temp = []
    count_stars = 0

    for i in range(r):
        line = sys.stdin.readline().strip()
        temp.append(line)

    # print(temp)

    for i in range(r):
        for j in range(c):
            flag = True
            if temp[i][j] == '*':
                if i - 1 >= 0:
                    # print(temp[i-1][j], end=" ")
                    if temp[i-1][j] == '*':
                        flag = False

                    if j - 1 >= 0:
                        # print(temp[i-1][j], end=" ")
                        if temp[i-1][j-1] == '*':
                            flag = False


                    if j + 1 < c:
                        # print(temp[i-1][j+1], end=" ")
                        if temp[i-1][j+1] == '*':
                            flag = False

                if i + 1 < r:
                    # print(temp[i+1][j], end=" ")

                    if temp[i+1][j] == '*':
                        flag = False

                    if j - 1 >= 0:
                        # print(temp[i+1][j-1], end=" ")

                        if temp[i+1][j-1] == '*':
                            flag = False

                    if j + 1 < c:
                        # print(temp[i+1][j+1], end=" ")

                        if temp[i+1][j+1] == '*':
                            flag = False

                if j - 1 >= 0:
                    # print(temp[i][j-1], end=" ")
                    if temp[i][j-1] == '*':
                        flag = False

                if j + 1 < c:
                    # print(temp[i][j+1], end=" ")
                    if temp[i][j+1] == '*':
                        flag = False
            else:
                flag = False

            if flag == True:
                count_stars = count_stars + 1

            # print(flag, temp[i][j])


    print(count_stars)
