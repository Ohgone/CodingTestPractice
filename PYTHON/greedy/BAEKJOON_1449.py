n, l = map(int, input().split())

arr = list(map(int, input().split()))
arr.sort()

end = arr[0] + l - 1
result = 1
for i in range(1, n):
    if arr[i] > end:
        result += 1
        end = arr[i] + l - 1

print(result)
