# Find the last ten digits of the series, 1 ^ 1 + 2 ^ 2 + 3 ^ 3 + ... + 1000 ^ 1000
# Solution found : 9110846700
def seriesSum(n: int) -> int:
    MOD = 10**10
    sum = 0
    for x in range(1, n + 1):
        sum += x**x
        sum %= MOD
    return sum


def main() -> None:
    print(seriesSum(1000))


if __name__ == "__main__":
    main()
