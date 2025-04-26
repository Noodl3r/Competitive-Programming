# Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum


# Solution found :  25164150
def natNumsSq(n) -> int:
    sum = 0
    for i in range(n):
        sum += i**2
    return sum


def sqNatNums(n) -> int:
    sum = 0
    for i in range(n):
        sum += i
    return sum**2


def main() -> None:
    count = 101

    print(f" {sqNatNums(count) - natNumsSq(count)}")


if __name__ == "__main__":
    main()
