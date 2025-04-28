n, k = map(int, input().split())
vals = list(map(int, input().split()))
count = 0
for x in vals:
    if x >= vals[k - 1] and x > 0:
        count += 1
print(count)
