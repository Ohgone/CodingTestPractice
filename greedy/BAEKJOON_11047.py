from collections import deque

n, k = map(int, input().split())

coin = deque()

for _ in range(n):
    coin.appendleft(int(input()))

result = 0

for i in coin:
    if (k // i) >= 1:
        result += k // i
        k = k % i

print(result)
