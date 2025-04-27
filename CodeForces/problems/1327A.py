def main() -> None:
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        if n >= k * k and (n - k * k) % 2 == 0:
            print("Yes")
        else:
            print("NO")


if __name__ == "__main__":
    main()
