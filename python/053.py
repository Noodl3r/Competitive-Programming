# How many distinct values of n choose r for 1 <= n <= 100, are greater than one million?

# Solution found as : 4075

import math


def main() -> None:
    cap = 10**6
    count = 0

    for n in range(23, 101):
        for r in range(1, n + 1):
            if math.comb(n, r) >= cap:
                count += n + 1 - 2 * r
                break
    print(count)


if __name__ == "__main__":
    main()
