import sys
input = sys.stdin.readline

num = int(input())
arr = []
for _ in range(num):
    arr.append(int(input()))

arr.sort(reverse=True)
arr.insert(0, 0)
result = 0
for i in range(num+1):
    if i % 3 == 0:
        continue
    else:
        result += arr[i]
print(result)
