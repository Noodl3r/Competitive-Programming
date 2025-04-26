t = int(input())
for _ in range(t):
    vals = input().split()
    if vals[0] == vals[1]:
        print(vals[2])
    elif vals[0] == vals[2]:
        print(vals[1])
    else:
        print(vals[0])
