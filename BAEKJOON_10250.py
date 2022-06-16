n = int(input())

for _ in range(n):
    w, h, n = map(int, input().split())

    if n % w == 0:
        i = str(w)
        j = str((n // w))
    else:
        i = str(n % w)
        j = str((n // w) + 1)

    if len(j) == 1:
        j = '0' + j

    print(i+j)