# What is the smallest odd composite that can be written as the sum of a prime and twice a square.

# Solution found : 5777

import math


def is_prime(n: int) -> bool:
    if n < 2:
        return False
    for i in range(2, int(math.isqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def is_goldbachs(n: int) -> bool:
    for x in range(1, int(math.isqrt(n)) + 1):
        temp = n - 2 * (x**2)
        if temp > 0 and is_prime(temp):
            return True
    return False


def main() -> None:
    count = 33
    while True:
        if is_prime(count) or is_goldbachs(count):
            count += 2
        else:
            print(count)
            return


if __name__ == "__main__":
    main()
