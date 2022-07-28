import sys
input = sys.stdin.readline

N = int(input())

for _ in range(N):
    n = int(input())
    arr = []
    for _ in range(n):
        arr.append(list(map(int, input().split())))
    arr.sort(key=lambda x: x[0])
    result = 1
    min = arr[0][1]
    for i in range(1, n):
        if arr[i][1] < min:
            result += 1
            min = arr[i][1]
    print(result)
