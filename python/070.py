# Find the value of n such that phi(n) is a permutation of n and the ratio  n/phi(n) produces a minimum.

# Solution Found : 8319823


def compute_totients(length: int) -> list[int]:
    phi = list(range(length + 1))
    for i in range(2, length + 1):
        if phi[i] == i:
            for j in range(i, length + 1, i):
                phi[j] -= phi[j] // i
    return phi


def is_permutation(num1: int, num2: int) -> bool:
    s1 = str(num1)
    s2 = str(num2)
    return sorted(s1) == sorted(s2)


def main() -> None:
    totients = compute_totients(10**7 + 1)
    min_ratio = float("inf")
    min_n = float("inf")
    for n in range(10, 10**7 + 1):
        if is_permutation(totients[n], n):
            temp_ratio = n / totients[n]
            if temp_ratio < min_ratio:
                min_ratio = temp_ratio
                min_n = n
    print(min_n)


if __name__ == "__main__":
    main()
