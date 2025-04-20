# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiplies is 23.

# Find the sum of tall the multiples of 3 or 5 below 1000.

# Solution found : 233168


def main() -> None:
    sum = 0
    RawList = []
    for i in range(1000):
        RawList.append(i)

    for i in RawList:
        if i % 3 == 0 or i % 5 == 0:
            sum += RawList[i]
    print(sum)


if __name__ == "__main__":
    main()
