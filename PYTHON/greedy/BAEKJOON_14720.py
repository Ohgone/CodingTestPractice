num = int(input())
arr = list(map(int, input().split()))
flag = 0
result = 0
for i in arr:
    if flag == i:
        result += 1
        flag += 1
        if flag == 3:
            flag = 0
    else:
        continue
print(result)
