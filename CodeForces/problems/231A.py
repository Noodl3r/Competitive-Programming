t = int(input())
result = 0
for _ in range(t):
    values = [int(x) for x in input().split()]
    if sum(values) > 1:
        result += 1
print(result)
