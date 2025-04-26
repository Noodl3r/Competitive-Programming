# What is the 10001st prime number?

# Solution found : 104743

import math


def isPrime(x: int) -> bool:
    for i in range(2, int(math.sqrt(x) + 1)):
        if x % i == 0:
            return False
    return True


def main() -> None:
    counter = 0
    for i in range(2, 1000000000):
        if isPrime(i):
            counter += 1
        if counter == 10001:
            print(i)
            break


if __name__ == "__main__":
    main()
