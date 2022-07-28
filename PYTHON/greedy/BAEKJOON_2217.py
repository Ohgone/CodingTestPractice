import sys
input = sys.stdin.readline

num = int(input())

arr = []

for _ in range(num):
    arr.append(int(input()))
    
arr.sort(reverse=True)
arr.insert(0, 0)

result = arr[1]
for i in range(2, num+1):
    if arr[i] * i > result:
        result = arr[i] * i

print(result)
