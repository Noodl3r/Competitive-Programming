# Find the largest digital sum of the form a ** b where a,b < 100
# Solution found : 972
def digiSum(n: int) -> int:
    sum = 0
    numStr = str(n)
    for digit in numStr:
        sum += int(digit)
    return sum


def main() -> None:
    maxCount = 0
    for a in range(1, 100):
        for b in range(1, 100):
            count = digiSum(a**b)
            if count > maxCount:
                maxCount = count
    print(maxCount)


if __name__ == "__main__":
    main()
