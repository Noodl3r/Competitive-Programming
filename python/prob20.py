# Find the sum of the digits in the number 100!
# Solution found as 648


def factorial(n) -> int:
    sum = 1
    for i in range(1, n + 1):
        sum *= i
    return sum


def main() -> None:
    num_str = str(factorial(100))
    result = 0
    for i in num_str:
        result += int(i)
    print(result)


if __name__ == "__main__":
    main()
