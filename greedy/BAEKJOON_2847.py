n = int(input())

arr = []
for _ in range(n):
    arr.append(int(input()))

result = 0
for i in range(n-2, -1, -1):
    if arr[i] >= arr[i+1]:
        result += arr[i] - arr[i+1] + 1
        arr[i] = arr[i+1] - 1
print(result)
