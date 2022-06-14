n = int(input())

for i in range(1, n):
    temp = str(i)
    sum = 0
    for j in temp:
        sum = sum + int(j)
    if n == i + sum:
        print(i)
        break 
else:
    print('0')