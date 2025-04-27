# How many chains with a starting number below one million, contain exactly 60 non-repeating terms?

# Solution Found : 402

import math

digit_cache = {}


def digital_fact(n: int) -> int:
    s = str(n)
    val = 0
    while n:
        term = n % 10
        val += digit_cache[term]
        n //= 10
    return val


def sixty_terms(n: int) -> int:
    prev_terms = set()
    while n not in prev_terms:
        prev_terms.add(n)
        n = digital_fact(n)
        if len(prev_terms) > 60:
            break
    return len(prev_terms) == 60


def main() -> None:
    for x in range(0, 10):
        digit_cache[x] = math.factorial(x)

    chains = 0
    for n in range(1, 1_000_000):
        if sixty_terms(n):
            chains += 1
    print(chains)


if __name__ == "__main__":
    main()
