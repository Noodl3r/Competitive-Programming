s1 = input()
s2 = input()

final_s = ""
for i in range(len(s1)):
    if s1[i] == s2[i]:
        final_s += "0"
    else:
        final_s += "1"
print(final_s)
