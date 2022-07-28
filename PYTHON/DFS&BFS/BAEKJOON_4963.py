from collections import deque

# 샹, 하, 좌, 우, 상좌, 상우, 하좌, 하우
move_x = [-1, 1, 0, 0, -1, -1, 1, 1]
move_y = [0, 0, -1, 1, -1, 1, -1, 1]


def bfs(x, y):
    graph[x][y] = 0
    q = deque()
    q.append((x, y))
    while q:
        x, y = q.popleft()
        for i in range(8):
            nx = x + move_x[i]
            ny = y + move_y[i]
            if nx < 0 or ny < 0 or nx >= h or ny >= w:
                continue
            if graph[nx][ny] == 0:
                continue
            if graph[nx][ny] == 1:
                graph[nx][ny] = 0
                q.append((nx, ny))


while True:
    w, h = map(int, input().split())

    if w == 0 and h == 0:
        break

    graph = []
    for _ in range(h):
        graph.append(list(map(int, input().split())))

    result = 0
    for i in range(h):
        for j in range(w):
            if graph[i][j] == 1:
                result += 1
                bfs(i, j)
    print(result)
