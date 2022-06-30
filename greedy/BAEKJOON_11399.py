num = int(input())
line = list(map(int, input().split()))

line.sort()
result = 0

for i in line:
    result += i * num
    num -= 1

print(result)
