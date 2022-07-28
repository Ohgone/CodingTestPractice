num = int(input())

arr = list(map(int, input().split()))

arr.sort(reverse=True)

for i in range(num):
    arr[i] += i + 2

print(max(arr))
