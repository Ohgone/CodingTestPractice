import heapq

n = int(input())
arr = []
result = 0

for _ in range(n):
    heapq.heappush(arr, int(input()))

if n == 1:
    print(0)
else:
    while len(arr) > 1:
        temp = heapq.heappop(arr) + heapq.heappop(arr)
        result += temp
        heapq.heappush(arr, temp)

    print(result)
