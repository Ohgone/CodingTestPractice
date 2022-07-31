def king_gat_operation(x, y):
    return (x + y) * (x - y)


n, m = map(int, input().split())
print(king_gat_operation(n, m))
