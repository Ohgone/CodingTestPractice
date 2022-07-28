n, m = map(int, input().split())

arr = list(map(int, input().split()))

min = 9999999999

for i in range(len(arr)):
    for j in range(i+1, len(arr)):
        for k in range(j+1, len(arr)):
            if m >= (arr[i] + arr[j] + arr[k]) and min > m - (arr[i] + arr[j] + arr[k]):
                result = (arr[i] + arr[j] + arr[k])
                min =  m - (arr[i] + arr[j] + arr[k])
print(result)
                
    

