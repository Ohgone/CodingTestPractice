import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
num = 0


def count(n, k):
    count = 0
    while n != 0:
        n = n // k
        count = count + n
    return count


print(min(count(n, 5) - count(m, 5) - count(n-m, 5),
      count(n, 2) - count(m, 2) - count(n-m, 2)))
