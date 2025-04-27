t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    vals = list(map(int, input().split()))
    count = 0
    robin_coins = 0
    for i in range(n):
        if vals[i] >= k:
            robin_coins += vals[i]
        else:
            if vals[i] == 0 and robin_coins > 0:
                robin_coins -= 1
                count += 1
    print(count)
