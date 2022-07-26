import sys
sys.setrecursionlimit(100000)
input = sys.stdin.readline

n = int(input())
n_plus_1 = n + 1

arr = [[] for _ in range(n_plus_1)]

for i in range(n-1):
    a, b = map(int, input().split())
    arr[a].append(b)
    arr[b].append(a)

visited = [0] * (n_plus_1)


def dfs(x):
    for i in arr[x]:
        if visited[i] == 0:
            visited[i] = x
            dfs(i)


visited[1] = 1
dfs(1)
for i in range(2, n_plus_1):
    print(visited[i])
