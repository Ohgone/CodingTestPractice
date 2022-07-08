import sys
input = sys.stdin.readline

n = int(input())

arr = []
for _ in range(n):
    arr.append(list(map(int, input().split())))

arr.sort(key=lambda x: (x[0], x[1]))

endtime = [arr[0][1]]

for i in range(1, n):
    for end in endtime:
        if arr[i][0] >= end:
            endtime.remove(end)
            endtime.append(arr[i][1])
            break
    else:
        endtime.append(arr[i][1])

print(len(endtime))
