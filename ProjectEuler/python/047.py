# Find the first four consecutive integers to have four distinct prime factors each. What is the first of these numbers?

# Solution Found : 134043

import math


def prime_factors(n: int) -> dict[int, int]:
    factors = {}
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            factors[i] = factors.get(i, 0) + 1
            n //= i
    if n > 1:
        factors[n] = factors.get(n, 0) + 1
    return factors


def main() -> None:
    for i in range(0, 9999999):
        if all(len(prime_factors(i + j)) == 4 for j in range(4)):
            print(i)
            break


if __name__ == "__main__":
    main()
