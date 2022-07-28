coin = [500, 100, 50, 10, 5, 1]

num = int(input())
num = 1000 - num

result = 0

for i in coin:
    if (num // i) >= 1:
        result += (num // i)
        num = num % i

print(result)
