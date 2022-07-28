num = list(map(int, input()))

if 0 in num and sum(num) % 3 == 0:
    num.sort(reverse=True)
    for i in num:
        print(i, end='')
else:
    print(-1)
