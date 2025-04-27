def subtract(n):
    if n % 10 != 0:
        return n - 1
    else:
        return n // 10


n, k = map(int, input().split())
for x in range(k):
    n = subtract(n)
print(n)
