t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    item = ""
    l = 1
    r = n
    a = [0] * n
    for i in range(n - 2, -1, -1):
        if s[i] == "<":
            a[i + 1] = l
            l += 1
        elif s[i] == ">":
            a[i + 1] = r
            r -= 1
    a[0] = l
    print(*a)
