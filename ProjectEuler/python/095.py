# Find the smallest member of the longest amicable chain with no element exceeding one million.

# Solution found : 14316


divisor_sums = {}


def sum_divisors(n: int) -> int:
    if n in divisor_sums:
        return divisor_sums[n]
    if n == 1:
        return 0
    val_sum = 1
    for x in range(2, int(n**0.5) + 1):
        if n % x == 0:
            val_sum += x
            if x != n // x:
                val_sum += n // x
    divisor_sums[n] = val_sum
    return val_sum


def main() -> None:
    LIM = 1_000_000
    longest_chain = []
    for x in range(2, LIM):
        chain = []
        temp = x
        while temp not in chain:
            if temp > LIM or temp == 0:
                break
            chain.append(temp)
            temp = sum_divisors(temp)
        else:
            if temp == x:
                if len(chain) > len(longest_chain):
                    longest_chain = chain
                    print(min(longest_chain))


if __name__ == "__main__":
    main()
