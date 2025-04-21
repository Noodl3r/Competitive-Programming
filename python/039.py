# Find the right triangle perimeter with the largest number of solutions.
# Solution found as 840
def triple(a, b, c) -> bool:
    if a**2 + b**2 == c**2:
        return True
    return False


def main() -> None:
    maxCounts = 0
    result = 0
    for p in range(1001):
        solutions = 0
        for a in range(1, p // 3):
            for b in range(a, (p - a) // 2):
                c = p - b - a
                if triple(a, b, c):
                    solutions += 1
        if solutions > maxCounts:
            maxCounts = solutions
            result = p
    print(result)


if __name__ == "__main__":
    main()
