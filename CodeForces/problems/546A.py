k, n, w = map(int, input().split())

cost = 0
for i in range(w + 1):
    cost += i * k

print(0 if n >= cost else cost - n)
