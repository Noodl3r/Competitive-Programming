n = int(input())
for i in range(1, 9000):
    digits = set(str(n + i))
    if len(digits) == 4:
        print(n + i)
        break
