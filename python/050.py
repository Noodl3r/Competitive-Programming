# What is the largest prime under 1 million that can be written as the sum of the most consecutive primes?

import math


def isPrime(n) -> bool:
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def primeGenerator(n) -> list[int]:
    primes = []
    for i in range(2, n):
        if isPrime(i):
            primes.append(i)
    return primes


def main() -> None:
    limit = 1000000
    primes = primeGenerator(limit)
    primeSet = set(primes)
    bestVal = 0
    bestLength = 0

    for i in range(len(primes)):
        for j in range(i + bestLength, len(primes)):
            val = sum(primes[i:j])
            if val >= limit:
                break
            if val in primeSet:
                seqLength = j - i
                if seqLength > bestLength:
                    bestVal = val
                    bestLength = seqLength

    print(bestVal)


if __name__ == "__main__":
    main()
