n = int(input())

result = [] 
for _ in range(n):
    result.append(list(map(int, input().split())))

cnt = [0] * n

for i in range(n):
    for j, k in result:
        if result[i][0] < j and result[i][1] < k:
            cnt[i] += 1


for i in cnt:
    print(i + 1, end=' ')
    



