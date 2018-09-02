import sys

#Accepted

for line in sys.stdin:
    t = line.strip().split()

    m = int(t[0])
    x = int(t[1])

    if m == 0 and x == 0:
        break

    if x == 0 or x == 100:
      print("Not found")
      continue

    v = ((m - 1)*100) // (100 - x)
    temp = ((m - 1)*100) % (100 - x)

    if temp == 0:
        v = v - 1

    if v < 0 or v < m:
        print("Not found")
        continue

    print(v)
