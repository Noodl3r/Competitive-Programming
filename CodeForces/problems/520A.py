input()
alphabet = set("abcdefghijklmnopqrstuvwxyz")
s = input().lower()

print("YES" if alphabet.issubset(s) else "NO")
