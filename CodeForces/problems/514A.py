vals = [int(char) for char in input()]

final_str = ""
for i, x in enumerate(vals):
    if i == 0:
        if x != 9 and x >= 5:
            x = 9 - x
    else:
        if x >= 5:
            x = 9 - x
    final_str += str(x)
print(final_str)
