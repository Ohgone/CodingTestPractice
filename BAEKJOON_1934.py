n = int(input())


def lc(a, b):
    resulta = a
    resultb = b
    if b > a:
        a, b = b, a
    while b:
        temp = b
        b = a % b
        a = temp
    return (resulta * resultb) / a


for _ in range(n):
    a, b = map(int, input().split())
    print(int(lc(a, b)))
