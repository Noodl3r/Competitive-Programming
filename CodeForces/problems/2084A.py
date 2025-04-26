def main() -> None:
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 2 == 0:
            print(-1)
        else:
            result = [n] + list(range(1, n))
            print(*result)


if __name__ == "__main__":
    main()
