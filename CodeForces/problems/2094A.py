t = int(input())

for _ in range(t):
    trip = input().split()
    s = ""
    for word in trip:
        s += word[:1]
    print(s)
