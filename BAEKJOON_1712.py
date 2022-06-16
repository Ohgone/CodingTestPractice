a, b, c = map(int, input().split())

temp = c - b
if temp <= 0:
    print(-1)
    exit()
else:
    print(a // temp + 1)