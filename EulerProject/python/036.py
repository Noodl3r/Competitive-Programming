# Find the sum of all numbers , less than 1 million that are palindromic in base 10 and base 2.

# Solution found : 872187


def pal(n: int) -> bool:
    num_str = str(n)
    bin_str = str(bin(n))
    bin_bool = bin_str[2 : len(bin_str)] == (bin_str[len(bin_str) : 1 : -1])
    num_bool = num_str == num_str[::-1]
    return bin_bool and num_bool


def main() -> None:
    sum = 0

    for x in range(0, 1_000_000):
        if pal(x):
            sum += x
    print(sum)


if __name__ == "__main__":
    main()
