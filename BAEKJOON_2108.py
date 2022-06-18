from collections import Counter
import sys

n = int(sys.stdin.readline())

result = []

for _ in range(n):
    result.append(int(sys.stdin.readline()))

result.sort()
print(round(sum(result) / n))
print(result[n//2])

if len(result) == 1:
    result3 = result[0]
    print(result3)
else:
    temp = Counter(result)
    result3 = temp.most_common(2)
    if result3[0][1] > result3[1][1]: 
        print(result3[0][0])
    else: 
        print(result3[1][0])

print(result[-1] - result[0])