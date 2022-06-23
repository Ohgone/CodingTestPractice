import sys

n = int(sys.stdin.readline().rstrip())

arr = list(map(int, sys.stdin.readline().rstrip().split()))

result = []

for i in range(n-1, -1, -1):
    for j in range(i, len(arr)):
        if arr[i] < arr[j]:
            result.append(arr[j])
            break
    else:
        result.append(-1)

while result:
    print(result.pop(), end=' ')
