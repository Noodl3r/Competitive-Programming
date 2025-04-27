n = int(input())


def main() -> None:
    lucky_nums = [4, 7, 44, 47, 77, 444, 447, 474, 477, 744, 747, 777]
    for div in lucky_nums:
        if n % div == 0:
            print("YES")
            return

    print("NO")


if __name__ == "__main__":
    main()
