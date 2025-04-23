# Find the sum of the 11 primes that are both truncatable from left to right and right to left
# Solution was found as 748317

import math


def primeCheck(n: int) -> bool:
    if n < 2:
        return False
    for div in range(2, int(math.sqrt(n) + 1)):
        if n % div == 0:
            return False
    return True


def primeGenerator(n: int) -> dict:
    primeList = set()
    for i in range(2, n):
        if primeCheck(i):
            primeList.add(i)
    return primeList


def truncate(primes, n: int) -> bool:
    numStr = str(n)
    for i in range(len(numStr)):
        if int(numStr[i:]) not in primes:
            return False
        if int(numStr[: len(numStr) - i]) not in primes:
            return False
    return True


def main() -> None:
    numPrimes = 10**6
    primes = primeGenerator(numPrimes)
    trunCount = 0
    sum = 0
    for p in primes:
        if p > 7 and truncate(primes, p):
            trunCount += 1
            sum += p
            print(f"Found {trunCount} - entry! {p}")
        if trunCount == 11:
            print(sum)
            break


if __name__ == "__main__":
    main()
