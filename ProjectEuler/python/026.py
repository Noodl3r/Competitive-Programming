# Find the value d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.

# Solution Found : 983


def recurring_cycle_length(divisor: int) -> int:
    remainders = {}
    value = 1
    position = 0

    while value != 0:
        if value in remainders:
            return position - remainders[value]
        remainders[value] = position
        value = (value * 10) % divisor
        position += 1
    return 0


def main() -> None:
    max_cycle = 0
    index = 0
    for i in range(1, 1000):
        cycle_length = recurring_cycle_length(i)
        if cycle_length > max_cycle:
            max_cycle = cycle_length
            index = i

    print(index)


if __name__ == "__main__":
    main()
