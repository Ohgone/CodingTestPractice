import sys
from collections import deque

str = sys.stdin.readline().rstrip()
result = []
queue = deque()
flag = 0

for i in range(len(str)):
    if str[i] == ' ':
        while queue:
            result.append(queue.pop())
        result.append(str[i])
    elif str[i] == '<':
        while queue:
            result.append(queue.pop())
        flag = 1
        result.append(str[i])
    elif flag == 1 and str[i] == '>':
        flag = 0
        result.append(str[i])
    elif flag == 1:
        result.append(str[i])
    elif flag == 0:
        queue.append(str[i])

for i in result:
    print(i, end='')
while queue:
    print(queue.pop(), end='')
