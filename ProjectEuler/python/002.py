# Find the sum of the first even-valued terms of the Fibonacci sequence


# Found solution of : 4613732
def fibonacci(n):
    if n in {0, 1}:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)


def genFibList(n) -> list:
    List = []
    i = 0
    val = 0
    while val < n:
        val = fibonacci(i)
        List.append(val)
        i += 1
    return List


def main() -> None:
    sum = 0
    maxVal = 4000000
    raw_list = genFibList(maxVal)
    even_list = []
    for value in raw_list:
        if value % 2 == 0:
            even_list.append(value)
    for i in even_list:
        sum += i
    print(sum)


if __name__ == "__main__":
    main()
