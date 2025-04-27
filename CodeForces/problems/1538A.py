t = int(input())
for _ in range(t):
    n = int(input())
    vals = list(map(int, input().split()))
    min_index = vals.index(min(vals))
    max_index = vals.index(max(vals))

    m1 = max(min_index, max_index) + 1
    m2 = n - min(min_index, max_index)
    m3 = min(min_index, max_index) + 1 + (n - max(min_index, max_index))
    print(min(m1, m2, m3))
