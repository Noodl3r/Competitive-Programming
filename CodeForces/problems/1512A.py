t = int(input())
for _ in range(t):
    input()
    a = list(map(int, input().split()))
    if a[0] != a[1] and a[0] != a[2]:
        print(1)
    elif a[1] != a[0] and a[1] != a[2]:
        print(2)
    else:
        for i in range(2, len(a)):
            if a[i] != a[0]:
                print(i + 1)
