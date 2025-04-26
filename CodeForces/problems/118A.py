vowels = set("AOYEUIaoyeui")
result = "".join("." + char.lower() for char in input() if char not in vowels)
print(result)
