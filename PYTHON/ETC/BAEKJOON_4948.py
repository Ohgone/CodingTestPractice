N = 123456 * 2 + 1
result = [False, False] + [True] * N
for i in range(2, int(N**0.5)+1):
    if result[i]:
        for j in range(2*i, N, i):
            result[j] = False

while True:
    n = int(input())
    if n == 0:
        break
    else:
        cnt = 0
        for i in range(n+1, (n*2)+1):
            if result[i]:
                cnt = cnt + 1
        print(cnt)