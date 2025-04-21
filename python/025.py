# Find the first Fibonacci sequence to contain 1000 digits.
# Found solution 4782


def iterativeFib(n) -> int:
    a, b = 1, 1
    index = 2

    while len(str(b)) < n:
        a, b = b, a + b
        index += 1
    return index


def main() -> None:
    print(iterativeFib(1000))


if __name__ == "__main__":
    main()
