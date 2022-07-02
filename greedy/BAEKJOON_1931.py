import sys
input = sys.stdin.readline

num = int(input())

arr = []

for _ in range(num):
    arr.append(list(map(int, input().split())))

arr.sort(key=lambda x: (x[1], x[0]))

result = 1
end = arr[0][1]

for i in range(1, num):
    if arr[i][0] >= end:
        result += 1
        end = arr[i][1]
print(result)
