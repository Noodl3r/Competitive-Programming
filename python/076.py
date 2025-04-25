# How many ways can one hundred be written as a sum of at least two positive integers?

# Solution found : 190569291

cache = {}


def sum_reps(n: int, max_part: int) -> int:
    if (n, max_part) in cache:
        return cache[(n, max_part)]
    if n == 0:
        return 1
    if n < 0 or max_part == 0:
        return 0
    result = sum_reps(n - max_part, max_part) + sum_reps(n, max_part - 1)
    cache[(n, max_part)] = result
    return result


print(sum_reps(100, 99))
