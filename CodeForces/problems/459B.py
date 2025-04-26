length = int(input())
vals = list(map(int, input().split()))
min_b = min(vals)
max_b = max(vals)
max_diff = max_b - min_b

count = 0
if min_b == max_b:
    count = length * (length - 1) // 2
else:
    min_count = vals.count(min_b)
    max_count = vals.count(max_b)
    count = min_count * max_count
print(max_diff, count)
