# Find the sum of all numbers that are equal to the sum of the factorial of their digits.
# It's important to say that the ceiling was chosen based on summing the factorial of 9. We know the max number of digits is 7, past this point the sum grows too slowly.

# Solution found as : 40730
import math


def extractDigits(n: int) -> list[int]:
    digits = []
    while n:
        digits.append(n % 10)
        n //= 10
    return digits


def digitFactSum(n: list[int]) -> int:
    sum = 0
    for x in n:
        sum += math.factorial(x)
    return sum


def main() -> None:
    count = 0
    max = 7 * math.factorial(9)
    for x in range(3, max):
        if x == digitFactSum(extractDigits(x)):
            count += x
    print(count)


if __name__ == "__main__":
    main()
