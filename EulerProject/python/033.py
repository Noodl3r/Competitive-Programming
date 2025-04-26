# Find the 4 digit calculating fractions, then return the simplified denominators.

# Solution found : 100

import math


def cancelling_frac(num: int, deno: int) -> bool:
    try:
        return (num // 10) / (deno % 10) == num / deno and (num % 10) == (deno // 10)
    except:
        return False


def main() -> None:
    prod_num = 1
    prod_deno = 1

    for i in range(10, 100):
        if i % 10 == 0 or i % 11 == 0:
            continue
        for j in range(i + 1, 100):
            if j % 10 == 0:
                continue
            if cancelling_frac(i, j):
                prod_num *= i
                prod_deno *= j

    divisor = math.gcd(prod_num, prod_deno)
    print(prod_deno // divisor)


if __name__ == "__main__":
    main()
