from collections import deque

# n, 그래프 값 입력
n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]

# 최대값 구하기
max_num = 0
for i in graph:
    max_num = max(max_num, max(i))

# 상, 하, 좌, 우
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

# DFS 정의


def bfs(x, y, check, visited):
    q = deque()
    q.append((x, y))
    visited[x][y] = 1
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if n > nx >= 0 and n > ny >= 0:
                if graph[nx][ny] > check and visited[nx][ny] == 0:
                    visited[nx][ny] = 1
                    q.append((nx, ny))


# 모두 탐색
result = 0
for check in range(max_num):
    visited = [[0] * n for _ in range(n)]
    cnt = 0
    for i in range(n):
        for j in range(n):
            if graph[i][j] > check and visited[i][j] == 0:
                bfs(i, j, check, visited)
                cnt += 1
    if cnt > result:
        result = cnt

print(result)
