# Looking at this, we know that 9 ^ 5 is the largest value a digit can have, so we only need to test up to 354,294
# Solution found as 443839
def digitalSum(n: int) -> int:
    sum = 0
    numStr = str(n)
    for digit in numStr:
        sum += int(digit) ** 5
    if sum == n:
        return n
    else:
        return 0


def main() -> None:
    sum = 0
    for i in range(10, 354295):
        if digitalSum(i) != 0:
            sum += i

    print(sum)


if __name__ == "__main__":
    main()
