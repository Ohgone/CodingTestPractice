num = int(input())
arr = list(map(int, input().split()))

arr.sort()
arr.pop()
print(sum(arr))
