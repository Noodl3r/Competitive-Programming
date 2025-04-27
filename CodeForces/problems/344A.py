count = 1
n = int(input())
prev = input()
for _ in range(1, n):
    curr = input()
    if curr != prev:
        count += 1
    prev = curr
print(count)
