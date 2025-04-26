# How many numbers below fifty million can be expressed as the sum of a prime square, prime cube, and prime fourth power?

import math


def is_prime(n) -> bool:
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def sieve(n):
    is_prime = [True] * (n + 1)
    is_prime[0:2] = [False, False]
    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            for j in range(i**2, n + 1, i):
                is_prime[j] = False
    return [x for x, prime in enumerate(is_prime) if prime]


def main() -> None:
    max_val = 50_000_000

    primes_2 = sieve(int(max_val ** (1 / 2)))
    primes_3 = sieve(int(max_val ** (1 / 3)))
    primes_4 = sieve(int(max_val ** (1 / 4)))

    numbers = set()

    for a in primes_4:
        a4 = a**4
        if a >= max_val:
            break
        for b in primes_3:
            b3 = b**3
            if b >= max_val:
                break
            for c in primes_2:
                total = a4 + b3 + c**2
                if total < max_val:
                    print(total)
                    numbers.add(total)
                else:
                    break

    print(len(numbers))


if __name__ == "__main__":
    main()
