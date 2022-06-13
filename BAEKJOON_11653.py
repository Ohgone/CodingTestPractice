num = int(input())
i = 1
while True:
    i = i + 1
    if num == 1:
        break
    if num % i == 0:
        print(i)
        num = num // i
        i = 1
        continue
    
    
    