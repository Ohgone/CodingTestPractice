import sys

def self_num(n):
    if int(len(str(n))) < 3:
        for i in range(1, n):
            temp = str(i)
            sum = 0
            for j in temp:
                sum = sum + int(j)
            if n == i + sum:
                return False
        else:
            return n
    else:
        for i in range(n - (9 * len(str(n))), n):
            temp = str(i)
            sum = 0
            for j in temp:
                sum = sum + int(j)
            if n == i + sum:
                return False
        else:
            return n


for i in range(1, 10000):
    result = self_num(i)
    if result:
       sys.stdout.write(str(result) + '\n')

       