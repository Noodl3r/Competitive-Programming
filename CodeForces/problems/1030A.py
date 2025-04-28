n = int(input())
vals = list(map(int, input().split()))
if max(vals) == 1:
    print("HARD")
else:
    print("EASY")
