string = input()
key = input()

keylen = len(key)
repeat = len(string) - keylen
cnt = 0
i = 0

while i <= repeat:
    if string[i:i + keylen] == key:
        cnt += 1
        i += keylen
    else:
        i += 1

print(cnt)
