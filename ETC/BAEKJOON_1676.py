n = int(input())


def fac(n):
    if n <= 1:
        return 1
    return n * fac(n-1)


facn = str(fac(n))
faclen = int(len(facn))
num = 0

for i in range(faclen-1, -1, -1):
    if facn[i] == '0':
        num = num + 1
    else:
        print(num)
        break
