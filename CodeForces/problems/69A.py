t = int(input())
netForce = [0, 0, 0]
for _ in range(t):
    i = 0
    comps = list(map(int, input().split()))
    for i in range(3):
        netForce[i] += comps[i]


print("YES" if all(x == 0 for x in netForce) else "NO")
