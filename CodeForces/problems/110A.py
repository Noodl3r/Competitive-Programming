def main() -> None:
    count = 0
    n = input()
    for char in n:
        if int(char) == 7 or int(char) == 4:
            count += 1

    if all(c in "47" for c in str(count)):
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    main()
