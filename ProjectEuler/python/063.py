# How many n-digit positive integers exist which are also an nth power?
# Bases must be <10.

# Solution found : 49


def main() -> None:
    count = []
    for i in range(1, 22):
        for n in range(1, 10):
            if i == len(str(n**i)):
                count.append(n**i)
    print(len(count))


if __name__ == "__main__":
    main()
