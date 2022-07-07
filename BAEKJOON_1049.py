import sys
input = sys.stdin.readline

n, m = map(int, input().split())

arr = []

for _ in range(m):
    arr.append(list(map(int, input().split())))

sett = 1001
one = 1001

for i in range(m):
    if arr[i][0] < sett:
        sett = arr[i][0]
    if arr[i][1] < one:
        one = arr[i][1]

result = 0

if n >= 6:
    one6 = one * 6
    if sett <= one6:
        result += (n // 6) * sett
        n = n % 6
    else:
        result += (n // 6) * one6
        n = n % 6

if sett <= n * one:
    result += sett
else:
    result += (n * one)

print(result)
