# Amicable numbers are numbers with the same sum of divisors
# Evaluate the sum of all amicable numbers under 10000.

# Found Solution : 31626


def sumDiv(n) -> int:
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            sum += i
    return sum


def amicableTest(n) -> bool:
    if sumDiv(sumDiv(n)) == n and sumDiv(n) != n:
        return True
    return False


def main() -> None:
    sum = 0
    for i in range(0, 10000):
        if amicableTest(i):
            sum += i
    print(sum)


if __name__ == "__main__":
    main()
