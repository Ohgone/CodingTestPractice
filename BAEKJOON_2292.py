n = int(input())

a = 1
cnt = 0
while True:
    cnt = cnt + 1
    if n <= a:
        print(cnt)
        break
    a = a + (6 * cnt)