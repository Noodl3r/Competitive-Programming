n = int(input())
levs = set(range(1, n + 1))

vals1 = set(map(int, input().split()))
vals2 = set(map(int, input().split()))

vals1.discard(0)
vals2.discard(0)

if vals1 | vals2 == levs:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
