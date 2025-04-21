# Find he sum of all primes below 2 million
# Solution found : 142913828922

import math


def isPrime(n: int) -> bool:
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def main() -> None:
    cap = 2000000
    sum = 0
    for i in range(2, cap):
        if isPrime(i):
            print(i)
            sum += i

    print(sum)


if __name__ == "__main__":
    main()
