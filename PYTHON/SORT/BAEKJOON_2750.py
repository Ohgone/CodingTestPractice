n = int(input())

arr = []
for _ in range(n):
    arr.append(int(input()))


for i in range(n):
    min = 9999
    for j in range(i, n):
        if arr[j] < min:
            min = arr[j]
            index = j
    arr[i], arr[index] = arr[index], arr[i]

for i in arr:
    print(i)
