t = int(input())
x = 0
for _ in range(t):
    if "++" in input():
        x += 1
    else:
        x -= 1
print(x)
