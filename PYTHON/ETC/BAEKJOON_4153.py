while True:
    n = list(map(int, input().split()))
    m = max(n)
    n.remove(m)
    if n[0] == 0 and n[1] == 0 and m == 0:
        break
    if (n[0] ** 2) + (n[1] ** 2) == (m ** 2):
        print("right")
    else:
        print("wrong")