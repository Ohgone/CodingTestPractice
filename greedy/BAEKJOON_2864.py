n, m = input().split()

maxn = n.replace('5', '6')
maxm = m.replace('5', '6')

minn = n.replace('6', '5')
minm = m.replace('6', '5')

print(int(minn) + int(minm), end=' ')
print(int(maxn) + int(maxm), end=' ')
