import math

n = int(input())
m = int(input())

if n == 1:
    n = 2

result = []

for i in range(n, m+1):
    end = int(math.sqrt(i))
    for j in range(2, end+1):
        if i % j == 0:
            break
    else:
        result.append(i)

if len(result) == 0:
    print(-1)
else:
    print(sum(result))
    print(min(result))