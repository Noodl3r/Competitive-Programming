n = int(input())
res = input()
a_count = res.count("A")
if a_count > n / 2:
    print("Anton")

elif a_count < n / 2:
    print("Danik")

else:
    print("Friendship")
