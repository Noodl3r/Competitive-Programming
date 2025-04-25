# Find the product of the coefficients, a and b, for the quadratic expression that maximizes the number of primes for consecutive values of n, starting with n. Choose between |a , b| < 1000

# Found Solution : -59231

import math


def prime_sieve(n: int) -> set[int]:
    if n < 2:
        return []
    sieve = [True] * (n + 1)
    sieve[0] = sieve[1] = False

    for num in range(2, int(math.sqrt(n)) + 1):
        if sieve[num]:
            for multiple in range(num**2, n + +1, num):
                sieve[multiple] = False
    return {i for i, is_p in enumerate(sieve) if is_p}


def quadratic(n: int, a, b):
    return n**2 + b * n + a


def main() -> None:
    primes = prime_sieve(10_000)
    max_terms = 0
    ab = 0
    for a in range(-999, 1000):
        for b in range(-1000, 1001):
            n = 0
            while True:
                temp = quadratic(n, a, b)
                if temp in primes and temp > 0:
                    n += 1
                else:
                    break
                if n > max_terms:
                    max_terms = n
                    ab = a * b

    print(ab)


if __name__ == "__main__":
    main()
