import sys
input = sys.stdin.readline
# print = sys.stdout.write

n, m = map(int, input().split())

cnt = 0
while n < m:
    if m % 2 == 0:
        m //= 2
        cnt += 1
        continue
    elif m % 10 == 1:
        m //= 10
        cnt += 1
        continue
    else:
        break


if n == m:
    print(cnt + 1)
else:
    print(-1)
