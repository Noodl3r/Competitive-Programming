def main() -> None:
    t = int(input())
    for _ in range(t):
        n = int(input())
        vals = sorted(list(map(int, input().split())))
        possible = all(vals[i + 1] - vals[i] <= 1 for i in range(n - 1))
        print("YES" if possible else "NO")


if __name__ == "__main__":
    main()
