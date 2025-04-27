# Find the pair of pentagonal numbers, P_j and P_k for which their sum and difference is pentagonal and their difference is minimized. What is the value of the difference?

# Solution found : 5482660

import math


# def pentagonalCheck(x: int) -> bool:
#     return ((math.sqrt(24 * x + 1) + 1) / 6).is_integer()


def pentagonalGen(length: int) -> list[int]:
    nums = []
    for n in range(10, length):
        nums.append(n * (3 * n - 1) // 2)
    return nums


def main() -> None:
    length = 99999
    pents = pentagonalGen(length)
    pents_set = set(pents)
    diff = float("inf")

    for i in range(len(pents)):
        P_i = pents[i]
        for j in range(i + 1, len(pents)):
            P_j = pents[j]
            D = P_j - P_i
            S = P_j + P_i
            if D in pents_set and S in pents_set and D < diff:
                diff = D
                print(f" New min diff: {diff} between {P_j} and {P_i}")
    print(diff)


if __name__ == "__main__":
    main()
