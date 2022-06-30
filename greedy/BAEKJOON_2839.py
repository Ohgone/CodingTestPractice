n = int(input())

cnt = 0
while n >= 0:
    if n % 5 == 0:
        cnt = cnt + (n // 5)
        print(cnt)
        break
    else:
        n = n - 3
        cnt = cnt + 1
else:
    print(-1)
        