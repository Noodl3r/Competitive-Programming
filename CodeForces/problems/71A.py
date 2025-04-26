n = int(input())
for _ in range(n):
    word = input()
    length = len(word)
    if length <= 10:
        print(word)
    else:
        mid_len = length - 2
        print(f"{word[0]}{mid_len}{word[-1]}")
