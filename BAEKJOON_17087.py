n, x = map(int, input().split())

arr = list(map(int, input().split()))


def gcd(a, b):
    if b > a:
        a, b = b, a
    while b:
        a, b = b, a % b
    return a


for i in range(n):
    arr[i] = abs(arr[i] - x)

result = arr[0]

if n == 1:
    print(result)
else:
    for i in range(n):
        result = gcd(arr[i], result)
    print(result)
