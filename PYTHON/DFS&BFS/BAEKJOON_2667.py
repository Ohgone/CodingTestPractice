from collections import deque

n = int(input())
arr = [(list(map(int, input()))) for _ in range(n)]
move_x = [-1, 1, 0, 0]
move_y = [0, 0, -1, 1]
result = []


def bfs(x, y):
    q = deque()
    cnt = 1
    arr[x][y] = 0
    q.append((x, y))
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + move_x[i]
            ny = y + move_y[i]
            if nx < 0 or ny < 0 or nx >= n or ny >= n:
                continue
            elif arr[nx][ny] == 0:
                continue
            else:
                cnt += 1
                arr[nx][ny] = 0
                q.append((nx, ny))
    return cnt


for i in range(n):
    for j in range(n):
        if arr[i][j] == 1:
            result.append(bfs(i, j))
        else:
            continue

print(len(result))
result.sort()
for i in result:
    print(i)
