# What is the sum of the digits in the number 2^1000?
# Found Solution : 1366


def main() -> None:
    sum = 0
    num = str(2**1000)
    for dig in num:
        sum += int(dig)
    print(sum)


if __name__ == "__main__":
    main()
