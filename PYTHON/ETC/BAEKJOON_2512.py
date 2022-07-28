n = int(input())
arr = list(map(int, input().split()))
m = int(input())

start = 0
end = max(arr)

while start <= end:
    temp = 0
    mid = (start + end) // 2
    for i in arr:
        if i > mid:
            temp += mid
        else:
            temp += i
    if m >= temp:
        start = mid + 1
    else:
        end = mid - 1
print(end)
