# A circular prime can be cycled and still be prime: 197 -> 971 -> 719
# How many circular primes are there below one million?

# Solution found as 55
import math


def primeCheck(n: int) -> bool:
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def cycleCheck(n) -> bool:
    numstr = str(n)
    for i in range(len(numstr)):
        teststr = numstr[i:] + numstr[:i]
        if not primeCheck(int(teststr)):
            return False
    return True


def main() -> None:
    count = 0
    length = 1000000
    for i in range(1, length):
        if cycleCheck(i):
            print(i)
            count += 1
    print(count)


if __name__ == "__main__":
    main()
