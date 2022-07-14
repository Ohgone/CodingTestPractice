import sys
from collections import deque
input = sys.stdin.readline
dic = dict([]) # 사전 자료형 정의
stack = []
temp = 65 # A의 아스키 코드 값

n = int(input())
word = input().rstrip()

# 입력값 사전 자료형에 대입
for _ in range(n):
    dic[chr(temp)] = int(input())
    temp = temp + 1

for i in word:
    if 'A' <= i <= 'Z':
        stack.append(dic[i])
    else:
        s2 = stack.pop()
        s1 = stack.pop()
        if i == '+':
            stack.append(s1+s2)
        elif i == '-':
            stack.append(s1-s2)
        elif i == '*':
            stack.append(s1*s2)
        elif i == '/':
            stack.append(s1/s2)
result = float(stack[0])  
print(f'{result:.2f}')   
    
  
