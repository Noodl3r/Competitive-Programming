# the totient function, phi(n), is defined as the number of positive integers less n that are relatively prime to n.
# Find the value of n <= 1_000_000 for which n / phi(n) is a maximum.

# Solution Found : 510510


def compute_totients(length: int) -> list[int]:
    phi = list(range(length + 1))
    for i in range(2, length + 1):
        if phi[i] == i:
            for j in range(i, length + 1, i):
                phi[j] -= phi[j] // i
    return phi


def main() -> None:
    maxRatio = 0
    totients = compute_totients(1_000_000)
    for n in range(1, 1_000_000):
        if maxRatio < n / totients[n]:
            maxRatio = n / totients[n]
            finalVal = n

    print(finalVal)


if __name__ == "__main__":
    main()
