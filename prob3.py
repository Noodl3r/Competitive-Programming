# The prime factors of 13195 are 5,7,13, and 29.
# What is the largest prime factor of the number 600851475143?

# Found Solution of 6857

import math


def is_prime(n) -> bool:
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def main() -> None:
    factors = []
    bigNum = 600851475143
    for i in range(2, int(math.sqrt(bigNum)) + 1):
        if bigNum % i == 0:
            factors.append(i)

    primes = []
    for i in factors:
        if is_prime(i):
            primes.append(i)
    print(primes)


if __name__ == "__main__":
    main()
