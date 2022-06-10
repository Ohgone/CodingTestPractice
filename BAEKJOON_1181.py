n = int(input())
result = []

for _ in range(n):
    temp = input()
    result.append(temp)

result.sort()
result.sort(key=lambda x:len(x))

print(result[0])
for i in range(1, len(result)):
    if result[i] == result[i-1]:
        continue
    print(result[i])
    