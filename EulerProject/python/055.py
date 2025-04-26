# How many Lychrel numbers are there below 10-thousand. (50 recursive depth)

# Solution found : 249


def palindromeCheck(n: int) -> bool:
    s = str(n)
    return s == s[::-1]


def palindromeSum(n: int) -> int:
    return n + int(str(n)[::-1])


def lychrelCheck(n: int) -> bool:
    for _ in range(50):
        n = palindromeSum(n)
        if palindromeCheck(n):
            return False
    return True


def main() -> None:
    count = 0
    for i in range(1, 10_000):
        if lychrelCheck(i):
            count += 1
    print(count)


if __name__ == "__main__":
    main()
