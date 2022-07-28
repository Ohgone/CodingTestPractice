from collections import deque

t = int(input())

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def dfs(x, y):
    q = deque()
    graph[x][y] = 0
    q.append((x, y))
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= m or ny >= n:
                continue
            if graph[nx][ny] == 0:
                continue
            graph[nx][ny] = 0
            q.append((nx, ny))
    return


for _ in range(t):
    m, n, k = map(int, input().split())

    graph = [[0] * n for _ in range(m)]

    for _ in range(k):
        a, b = map(int, input().split())
        graph[a][b] = 1

    result = 0
    for i in range(m):
        for j in range(n):
            if graph[i][j] == 1:
                result += 1
                dfs(i, j)
    print(result)
