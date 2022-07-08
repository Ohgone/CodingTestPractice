n = int(input())

arr = []
for _ in range(n):
    arr.append(int(input()))

arr.sort()

result = [arr[0]]
temp = 0
for i in range(1, n):
    result.append(result[i-1]+arr[i])

print(sum(result)-result[0])
