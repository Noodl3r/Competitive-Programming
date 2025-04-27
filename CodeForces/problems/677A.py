n, h = map(int, input().split())
vals = list(map(int, input().split()))
print(n + sum((x > h) for x in vals))
