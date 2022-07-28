N = int(input())

for _ in range(N):
    n = int(input())
    arr = list(map(int, input().split()))
    result = 0
    max = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] < max:
            result += (max - arr[i])
        else:
            max = arr[i]
    print(result)
