# A triangular number is a number that results from addition of the natural numbers
# What is the value of the first triangular number to have over 500 divisors?
# Solution found as 76576500
import math


def triangle(n) -> int:
    return n * (n + 1) // 2


def divisorCount(n) -> int:
    count = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            if i == n // i:
                count += 1
            else:
                count += 2
    return count


def main() -> None:
    i = 2
    while True:
        tri = triangle(i)
        counts = divisorCount(tri)
        print(f"Val : {tri} | Divisors : {counts}")
        if counts > 500:
            print(tri)
            break
        i += 1


if __name__ == "__main__":
    main()
