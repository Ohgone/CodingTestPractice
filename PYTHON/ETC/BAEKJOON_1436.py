n = int(input())

i = 0
cnt = 0 
result = []

while True:
    i = i + 1
    if '666' in str(i):
        cnt = cnt + 1
        if cnt == n:
            print(i)
            break
       