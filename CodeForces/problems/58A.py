s = input()
target = "hello"
i = 0

for char in s:
    if char == target[i]:
        i += 1
    if i == 5:
        print("YES")
        break
if i < 5:
    print("NO")
