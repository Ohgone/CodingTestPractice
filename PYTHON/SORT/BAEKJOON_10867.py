n = int(input())

arr = list(set(list(map(int, input().split()))))
arr.sort()

for i in arr:
    print(i, end=' ')
