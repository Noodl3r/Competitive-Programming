# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers if 90009 = 91 x 99


# Find the largest palindrome made from the product of 2 3-digit numbers.


# Solution found : 906609
def palindrome(x: int) -> bool:
    num = str(x)
    if num == num[::-1]:
        return True
    return False


def main() -> None:
    palindromes = []
    for i in range(999):
        for j in range(i, 999):
            tot = i * j
            if palindrome(tot):
                palindromes.append(tot)

    print(max(palindromes))


if __name__ == "__main__":
    main()
