n = int(input())

arr = list(map(int, input().split()))

arr.sort()

result = 0
for i in range(n):
    for j in range(i + 1):
        result += arr[j]

print(result)