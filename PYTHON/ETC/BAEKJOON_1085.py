x, y, w, h = map(int, input().split())

if x < abs(x - w):
    minx = x
else:
    minx = abs(x - w)

if y < abs(y - h):
    miny = y
else:
    miny = abs(y - h)

print(min(minx, miny))