switch = [300, 60, 10]

time = int(input())

if time % 10 != 0:
    print(-1)
    exit()

for i in switch:
    if time // i >= 1:
        print(time//i, end=' ')
        time = time % i
    else:
        print(0, end=' ')
