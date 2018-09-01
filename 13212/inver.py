import sys

inversions = 0

def merge(l, r):
    global inversions
    temp = []

    # print(l, r)
    a = len(l)
    b = len(r)

    i = 0
    j = 0
    for k in range(a + b):
        if i >= a:
            temp.append(r[j])
            j = j + 1
            # print("a - i", a, i, a-i)
            inversions = inversions + (a - i)
        elif j >= b:
            temp.append(l[i])
            i = i + 1
        else:
            if l[i] <= r[j]:
                temp.append(l[i])
                i = i + 1
            elif l[i] > r[j]:
                temp.append(r[j])
                j = j + 1
                # print("a - i", a, i, a-i)
                inversions = inversions + (a - i)

    # print("inv:", inversions)
    return temp

def merge_sort(A):
    l = len(A)

    if l <= 1:
        return A
    else:
        mid = l // 2
        l = A[:mid]
        r = A[mid:]

        # print("l, r:", l, r)
        left = merge_sort(l)
        right = merge_sort(r)
        res = merge(left, right)

        # print("res: ", res)
        return res

if __name__ == '__main__':
    while True:
        n = int(sys.stdin.readline())

        if n == 0:
            break

        inversions = 0
        A = []
        for i in range(n):
            t = int(sys.stdin.readline())
            A.append(t)

        merge_sort(A)

        print(inversions)
