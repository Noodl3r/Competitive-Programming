# How many Sundays fell on the first of the month during the twentieth century?

# Solution found : 171


def leap_year(year: int) -> bool:
    return (year % 4 == 0) and (year % 100 != 0 or year % 400 == 0)


def main() -> None:
    month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    week_day = 1
    count = 0

    for year in range(1900, 2001):
        for month in range(12):
            if year >= 1901 and week_day == 0:
                count += 1
            days_in_month = month_days[month]
            if month == 1 and leap_year(year):
                days_in_month += 1
            week_day = (week_day + days_in_month) % 7
    print(count)


if __name__ == "__main__":
    main()
