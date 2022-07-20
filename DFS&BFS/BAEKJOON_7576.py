from collections import deque

n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(m)]
q = deque()
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
result = 0

for i in range(m):
    for j in range(n):
        if arr[i][j] == 1:
            q.append((i, j))


def bfs():
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= m or ny >= n:
                continue
            if arr[nx][ny] == 0:
                arr[nx][ny] = arr[x][y] + 1
                q.append((nx, ny))


bfs()
for i in arr:
    for j in i:
        if j == 0:
            print(-1)
            exit()
    result = max(result, max(i))
print(result - 1)
