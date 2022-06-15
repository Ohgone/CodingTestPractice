n = int(input())

for _ in range(n):
    floor = int(input())
    num = int(input())

    arr = [i for i in range(1, num+1)]
    
    for _ in range(floor):
        for i in range(1, num):
            arr[i] += arr[i-1]
    print(arr[-1])