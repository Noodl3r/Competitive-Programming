# What starting number below one million produces the longest Collatz sequence?

# Solution found : 837799

collatz_cache = {}


def collatz_length(n):
    if n == 1:
        return 1
    if n in collatz_cache:
        return collatz_cache[n]

    if n % 2 == 0:
        next_n = n // 2
    else:
        next_n = 3 * n + 1

    length = 1 + collatz_length(next_n)
    collatz_cache[n] = length
    return length


def main() -> None:
    max_val = 0
    best_int = 0
    for i in range(1, 1_000_001):
        length = collatz_length(i)
        if length > max_val:
            print(f"New value found : {i} with length {length}")
            max_val = length
            best_int = i
    print(best_int)


if __name__ == "__main__":
    main()
