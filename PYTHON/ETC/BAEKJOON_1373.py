n2 = list(map(int, input()))
nlen = len(n2)
realresult = []

while n2:
    try:
        result = 0
        if n2.pop() == 1:
            result = result + 1
        if n2.pop() == 1:
            result = result + 2
        if n2.pop() == 1:
            result = result + 4
        realresult.append(result)
    except:
        realresult.append(result)

while realresult:
    print(realresult.pop(), end='')
