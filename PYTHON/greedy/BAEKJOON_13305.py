n = int(input())

distance = list(map(int, input().split()))
oilPrice = list(map(int, input().split()))
minPrice = oilPrice[0]
result = 0

for i in range(n-1):
    result += minPrice * distance[i]
    if minPrice < oilPrice[i+1]:
        continue
    else:
        minPrice = oilPrice[i+1]
        
print(result)
