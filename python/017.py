# How many letters are used when 1 - 1000 is all written out?


def number_to_words(n, ones, tens):
    if 1 <= n <= 19:
        return ones[n]
    elif 20 <= n <= 99:
        tens_place = n // 10 * 10
        ones_place = n % 10
        if ones_place == 0:
            return tens[tens_place]
        else:
            return tens[tens_place] + ones.get(ones_place, "")
    elif 100 <= n <= 999:
        hundreds_place = n // 100
        remainder = n % 100
        if remainder == 0:
            return ones[hundreds_place] + "hundred"
        else:
            return (
                ones[hundreds_place]
                + "hundredand"
                + number_to_words(remainder, ones, tens)
            )
    elif n == 1000:
        return "onethousand"


def main() -> None:
    number_words_1_to_19 = {
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
        11: "eleven",
        12: "twelve",
        13: "thirteen",
        14: "fourteen",
        15: "fifteen",
        16: "sixteen",
        17: "seventeen",
        18: "eighteen",
        19: "nineteen",
    }

    number_words_tens = {
        20: "twenty",
        30: "thirty",
        40: "forty",
        50: "fifty",
        60: "sixty",
        70: "seventy",
        80: "eighty",
        90: "ninety",
    }

    total = 0
    for i in range(1, 1001):
        word = number_to_words(i, number_words_1_to_19, number_words_tens)
        total += len(word)
    print(total)


if __name__ == "__main__":
    main()
