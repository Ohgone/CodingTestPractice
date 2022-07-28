from collections import deque
dic = {"0": "000", "1": "001", "2": "010", "3": "011",
       "4": "100", "5": "101", "6": "110", "7": "111"}

n = list(input())
a = len(n)
result = deque()

for i in range(a):
    result.append((dic[n[i]]))

result[0] = str(int(result[0]))

for i in range(a):
    print(result[i], end='')
