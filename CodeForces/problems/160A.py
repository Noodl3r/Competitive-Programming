n = int(input())
s_vals = sorted(
    list(
        map(
            int,
            input().split(),
        )
    ),
    reverse=True,
)
for i in range(1, n + 1):
    if sum(s_vals[0:i]) > sum(s_vals[i:]):
        print(i)
        break
else:
    print(n)
