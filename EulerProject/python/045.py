# Find the next triangle number that is also pentagonal and hexagonal after 40755.


def tri_gen(n: int) -> set:
    numSet = set()
    for i in range(286, n):
        numSet.add(i * (i + 1) / 2)
    return numSet


def pent_gen(n: int) -> set:
    numSet = set()
    for i in range(166, n):
        numSet.add(i * (3 * i - 1) / 2)
    return numSet


def hex_gen(n: int) -> set:
    numSet = set()
    for i in range(144, n):
        numSet.add(i * (2 * i - 1))
    return numSet


def main() -> None:
    limit = 10**7
    triSet = tri_gen(limit)
    pentSet = pent_gen(limit)
    hexSet = hex_gen(limit)

    common_vals = triSet & pentSet & hexSet
    print(int(min(common_vals)))


if __name__ == "__main__":
    main()
