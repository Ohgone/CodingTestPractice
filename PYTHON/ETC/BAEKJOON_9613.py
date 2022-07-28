from collections import deque


def gcd(a, b):
    if a < b:
        a, b = b, a
    while b:
        a, b = b, a % b
    return a


n = int(input())


for _ in range(n):
    result = 0
    arr = deque(list(map(int, input().split())))
    i = arr.popleft()
    for j in range(i-1):
        for k in range(j+1, i):
            temp = (gcd(arr[j], arr[k]))
            result += temp
    print(result)
