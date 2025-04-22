# A number chain is created by adding the square of the digits in a number to form a new number. How many of these below 10 million reach 89.

# Solution found : 8581146


def findSum(n) -> int:
    digits = []
    while n:
        digits.append(n % 10)
        n //= 10
    sum = 0
    for digit in digits:
        sum += digit**2
    return sum


def main() -> None:
    count = 0
    limit = 10_000_000
    cache = {}
    for i in range(1, limit):
        index = i
        chain = []
        while index != 89 and index != 1:
            if index in cache:
                index = cache[index]
                break
            chain.append(index)
            index = findSum(index)
        for num in chain:
            cache[num] = index
        if index == 89:
            count += 1
    print(f"Count is : {count}")


if __name__ == "__main__":
    main()
