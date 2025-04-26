n = int(input())
s = input()

val_dict = {}
for i in range(n - 1):
    duo = s[i : i + 2]
    if duo in val_dict:
        val_dict[duo] += 1
    else:
        val_dict[duo] = 1
print(max(val_dict, key=val_dict.get))
