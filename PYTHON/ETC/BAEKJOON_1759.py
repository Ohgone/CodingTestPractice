from itertools import combinations

search = set(['a', 'e', 'i', 'o', 'u'])
l, c = map(int, input().split())
arr = list(input().split())
arr.sort()
combi = list(combinations(arr, l))
result = []

chk1 = 0
chk2 = 0
for i in combi:
    for j in i:
        if j in search:
            chk1 += 1
        else:
            chk2 += 1
    if chk1 >= 1 and chk2 >= 2:
        result.append("".join(i))
    chk1 = 0
    chk2 = 0

for i in result:
    print(i)
