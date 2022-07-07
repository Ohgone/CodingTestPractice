n = int(input())

num = 1
temp = 1

if n == 1:
    print(1)
    exit()

while True:
    if num > n:
        print(temp-1)
        break
    temp += 1
    num += temp
