# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


# Solution : 232792560


def main() -> None:
    result = 20
    while True:
        if all(result % i == 0 for i in range(1, 21)):
            print(result)
            break
        result += 20


if __name__ == "__main__":
    main()
