import sys

arr = [True] * 1000001
for i in range(2, 1001):
    if arr[i]:
        for j in range(i+i, 1000001, i):
            arr[j] = False


while True:
    num = int(sys.stdin.readline().rstrip())
    if num == 0:
        break
    for i in range(3, num):
        if arr[i] and arr[num-i]:
            print(f"{num} = {i} + {num-i}")
            break
