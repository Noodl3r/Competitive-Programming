# An irrational decimal fraction is created by concatenating the positive integers, with decimals at point n being represnted at d_n what is, d_1 * d_10 * ... d_1000000
# Working the max length is important here. There are 10 1 digit numbers, 89 2 digit numbers, 899 3 digit numbers, 8999 4 digit numbers, 89999 5 digit numbers. We just need to calculate positions until there's a digit in the millionth place.
# Final solution found : 210


def main() -> None:
    numStr = ""
    product = 1
    for i in range(1, 1000001):
        numStr += str(i)
    for i in range(7):
        product *= int(numStr[10**i - 1])
    print(f"Final Product of : {product}")


if __name__ == "__main__":
    main()
