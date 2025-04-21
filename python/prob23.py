# A number is deficient if the sum of it's divisors are less than it's value. Abundant if more.
# Find the sum of all positive integers which cannot be written as the sum of two abundant numbers.
# Solution Found as : 4179871

import math


def findDivisors(n) -> list[int]:
    List = []
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            List.append(i)
            if i != n // i and n // i != n:
                List.append(n // i)
    return List


def abundant(n) -> bool:
    sum = 0
    divList = findDivisors(n)
    for i in divList:
        sum += i
    if sum > n:
        return True
    else:
        return False


def main() -> None:
    maxIndex = 28124
    abundants = [i for i in range(1, maxIndex) if abundant(i)]
    written = [False] * maxIndex

    for i in range(len(abundants)):
        for j in range(i, len(abundants)):
            c = abundants[i] + abundants[j]
            if c < maxIndex:
                written[c] = True
            else:
                break
    total = sum(i for i, can in enumerate(written) if not can)
    print(total)


if __name__ == "__main__":
    main()
