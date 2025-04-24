# What 12 digit number can come from concatenating 3 4 digit numbers that are related by all being prime, and being permutations of each other.

# The maximum arithmetic constant is 3000. Lowest values are 1000 and 9999.

import math


def prime(n: int) -> bool:
    if n < 2:
        return False
    for div in range(2, int(math.sqrt(n)) + 1):
        if n % div == 0:
            return False
    return True


def primeGen() -> set:
    return {i for i in range(1_000, 10_000) if prime(i)}


def permutation(n1: int, n2: int) -> bool:
    return sorted(str(n1)) == sorted(str(n2))


def main() -> None:
    primes = primeGen()
    for p in primes:
        if p == 1487:
            continue
        for d in range(1, 3333):
            q, r = p + d, p + 2 * d
            if r >= 10_000:
                break
            if q in primes and r in primes:
                if permutation(q, p) and permutation(r, p):
                    print(f"{p}{q}{r}")
                    return


if __name__ == "__main__":
    main()
