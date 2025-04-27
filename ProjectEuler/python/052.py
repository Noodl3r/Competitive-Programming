# What is the smaller integer x, such that 2x, 3x, 4x, 5x, and 6x all have the same digits / digit counts.

# Solution found as 142857


def digitString(n: int) -> str:
    return "".join(sorted(str(n)))


def main() -> None:
    for i in range(1, 999999999):
        key = digitString(i)
        for j in range(1, 7):
            test = digitString(j * i)
            if key != test:
                break
        else:
            print(i)
            return


if __name__ == "__main__":
    main()
