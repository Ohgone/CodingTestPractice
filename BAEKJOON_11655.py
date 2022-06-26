import sys

str = sys.stdin.readline().rstrip()

for i in str:
    if 'A' <= i <= 'Z':
        if i <= 'M':
            print(chr(ord(i)+13), end='')
        else:
            print(chr(ord(i)-13), end='')
    elif 'a' <= i <= 'z':
        if i <= 'm':
            print(chr(ord(i)+13), end='')
        else:
            print(chr(ord(i)-13), end='')
    else:
        print(i, end='')
