def is_valentines_day(n):
    if 120 <= n <= 123:
        if n == 121:
            return "Likely"
        else:
            return "Unlikely"
    else:
        return "Invalid input. N should be between 120 and 123 (inclusive)."

# Input
n = int(input().strip())

# Output
print(is_valentines_day(n))
