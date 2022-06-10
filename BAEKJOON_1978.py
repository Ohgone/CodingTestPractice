import math

n = int(input())
a = list(map(int, input().split()))
cnt = 0

for i in range(n):
    if a[i] <= 1:
        continue
    else:
        m = a[i]
    for j in range(2, int(math.sqrt(m)+1)):
        if m % j == 0:
            cnt = cnt - 1
            break
    cnt = cnt + 1

print(cnt)

