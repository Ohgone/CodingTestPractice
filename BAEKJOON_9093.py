n = int(input())

for _ in range(n):
    instr = list(input().split())

    for i in instr:
        print(i[::-1], end=' ')
