from sys import stdin

arr = list(stdin.readline().rstrip())
result = 0
stack = []

for i in range(len(arr)):
    if arr[i] == '(':
        stack.append(arr[i])
    elif arr[i] == ')':
        if arr[i-1] == '(':
            result += len(stack) - 1
            stack.pop()
        elif arr[i-1] == ')':
            result += 1
            stack.pop()
print(result)
