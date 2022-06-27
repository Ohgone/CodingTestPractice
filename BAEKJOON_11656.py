import sys

str1 = sys.stdin.readline().rstrip()
arr = []

for i in range(len(str1)):
    arr.append(str1[i:])

arr.sort()

for i in arr:
    print(i)

